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

bool IsSorted(node*head){
    int x=-32768;
    node*p=head;
    while(p!=NULL){
        if(p->data<x)
            return false;
        x=p->data;
        p=p->next;
    }
    return true;
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

    if(IsSorted(head))cout<<"linked list is sorted";
    else cout<<"Linked list is not sorted";
}