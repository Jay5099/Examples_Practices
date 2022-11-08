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
}

void insert(node**head,int k,int pos){
    
}

int main(){

    int n,k,pos;  
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
    cout<<"Enter position and element to enter:";
    cin>>pos>>k;
    insert(&head,k,pos);
    printlist(head);
    }
    return 0;
}