/*  concate the linked list like this
    1->2->3   7->0->2 
    1->2->3->7->0->2
*/

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

void concate(node**head1,node**head2){
    node*p=(*head1);
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=(*head2);
    (*head2)=NULL;
}

int main(){

    int n;  
    cout<<"Enter the size of linklist1:";
    cin>>n;                       
    int A1[n]{};
    cout<<"Enter elements of linklist:";
    for(int i=0;i<n;i++){
       cin>>A1[i];
    }
    node* head1=NULL;
    head1=new node();
    head1=create(head1,A1,n);

    cout<<"Enter the size of linklist2:";
    cin>>n;                       
    int A2[n]{};
    cout<<"Enter elements of linklist:";
    for(int i=0;i<n;i++){
       cin>>A2[i];
    }
    node* head2=NULL;
    head2=new node();
    head2=create(head2,A2,n);

    printlist(head1);
    printlist(head2);

    concate(&head1,&head2);
    printlist(head1);
}