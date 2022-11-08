//delte linklist

#include<iostream>

using namespace std;

class node{
public:
    int data;
    struct node *next;
};

 node* create(node*head,int A[],int n){
    node*last=NULL;
    head=new node;
    head->data=A[0];
    head->next=NULL;
    last=head;
for(int i=1;i<n;i++){


   node*temp=NULL;
   temp =new node;
   temp->data=A[i];
   temp->next=NULL;
   last->next=temp;
   last=temp;
}
return head;
}

void printlist(struct node *p){
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<"\n";
    }

int delete_node(node**head,int pos){

    int x{-1};

    node*p=(*head);
    node*q=NULL;

    for(int i=0;i<pos-1 && p!=NULL;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    p->next=NULL;
    x=p->data;
    delete p;

    return x;
}

int main(){

    int n;  
    cout<<"Enter the size of linklist:";
    cin>>n;                       
    int A[n]{};
    cout<<"Enter elements of linklist:";
    for(int i=0;i<n;i++){
       cin>>A[i];
    }


    node* head=NULL;
    node* search=NULL;
    head=new node();
    head=create(head,A,n);

    printlist(head);

    while(1){
        int k;
        cout<<"Enter position to delete:";
        cin>>k;
        k=delete_node(&head,k);
        printlist(head);
        cout<<" deleted node:"<<k<<"\n";
    }
}