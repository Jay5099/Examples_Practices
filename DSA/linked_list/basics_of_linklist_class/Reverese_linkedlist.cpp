// Reverese with pointing function
//And using recursion

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
      cout<<"\n";;
}

node*reversell(node**head){
    node*p=(*head);
    node*q=NULL;
    node*r=NULL;

    while (p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    (*head)=q;
    return (*head);
}

void R_reverse(node*q,node*p,node**head){
    if(p!=NULL){
        R_reverse(p,p->next,head);
        p->next=q;
    }
    else  (*head)=q;
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

    head=reversell(&head);
    printlist(head);
    R_reverse(NULL,head,&head);
    printlist(head);
}