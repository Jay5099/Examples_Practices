//check loop via rabit vs turtoise

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

int isLoop(node*f)
{
  node *p=NULL;
  node *q=NULL;
 p=q=f;
 do{
 p=p->next;
 q=q->next;
 q=q?q->next:q;
 }while(p && q && p!=q);

 if(p==q)
 return 1;
 else
 return 0;
}

int main(){

    int n{5};  
    // cout<<"Enter the size of linklist:";
    // cin>>n;                       
    int A[5]{};
    cout<<"Enter elements of linklist:";
    for(int i=0;i<5;i++){
       cin>>A[i];
    }


    node* head=NULL;
    node* head1=NULL;
    node* head2=NULL;
    head=new node();
    head=create(head,A,n);

    head1=head->next->next;
    head2=head->next->next->next->next;
    head2->next=head1;
    cout<<isLoop(head);
}