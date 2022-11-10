#include<iostream>

using namespace std;

class node{
public:
    node*prev;
    int data;
    node *next;
};


 node* create(node*head,int A[],int n){
    node*last=NULL;
    head=new node();
    head->data=A[0];
    head->prev=head->next=NULL;
    last=head;
for(int i=1;i<n;i++){


   node*temp=NULL;
   temp =new node;
   temp->data=A[i];
   temp->next=last->next;
   last->next=temp;
   last=temp;
}
return head;
}

int Length(struct node *p){
        int len{};
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p->next;
            len++;
        }
      cout<<"\n";;
}

void Insert(node*head,int index,int x){
    node*temp,*p=head;
    
    if(index<0||index>Length(p))
        return;
    if(index==0){
        temp=new node();
        temp->data=x;
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    else{
        for(int i=0;i<index-1;i++)p=p->next;
        temp=new node();
        temp->data=x;
        temp->prev=p;
        temp->next=p->next;
        if(p->next)p->next->prev=temp;
        p->next=temp;
    }
}

int Delete(node**head,int index){
    int x{-1};
    node*p=(*head);
    if(index<0||index>Length(p))
        return -1;
    if(index==1){
        (*head)=(*head)->next;
        if ((*head))(*head)->prev=NULL;

        x=p->data;
        free(p);
    }
    else{
        node*q=p->prev;
        for(int i=0;i<index-1;i++){q=p;p=p->next;}
        node*r=p->next;
        q->next=p->next;
        if(p->next)
            r->prev=p->prev;
        x=p->data; 

        free(p);
    }
    return x;
}

void printlist( node *p){
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p->next;
        }
      cout<<"\n";;
}

void Reverse(node*head){
    node*temp,*p=head;
    while(p!=NULL){
        temp=p->next;
        p->next=p->prev;
        p=p->prev;
       if(p!=NULL && p->next==NULL)
            head=p;
}
}

int main(){

    int n{};  
    cout<<"Enter the size of linklist:";
    cin>>n;                       
    int A[3]{11,22,33};
    cout<<"Enter elements of linklist:";
    for(int i=0;i<n;i++){
       cin>>A[i];
    }


    node* head=NULL;
    head=new node();
    head=create(head,A,n);

    printlist(head);
    Insert(head,2,56);
    printlist(head);
    Delete(&head,2);
    printlist(head);
}