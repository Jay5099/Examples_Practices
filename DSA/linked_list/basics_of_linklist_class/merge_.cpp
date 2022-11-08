/*  merge the linked list like this
    1->2->4   0->3>7 
    0->1->2->3->4->7
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

node*merge_ll(node*head1,node*head2,node*result){
    
    result=NULL;
    node*last=NULL;

    if(head1->data<head2->data){
        result=last=head1;
        head1=head1->next;last->next=NULL;
    }
    else{
        result=last=head2;
        head2=head2->next;last->next=NULL;
    }
    while(head1!=NULL&&head2!=NULL){
        if(head1->data<head2->data){
            last->next=head1;last=head1;
            head1=head1->next;
            last->next=NULL;
        }
        else{
            last->next=head2;last=head2;
            head2=head2->next;
            last->next=NULL;
        }
    }
    if(head1!=NULL)last->next=head1;
    else last->next=head2;

    return result;
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

    node*result=NULL;
    result=merge_ll(head1,head2,result);
    printlist(result);
}