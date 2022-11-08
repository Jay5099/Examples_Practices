//create linklist using class and function


#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
};

void printlist(node*head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}

 node* create(node*head,int A[]){
    node*last=NULL;

    head=new node;
    head->data=A[0];
    head->next=NULL;
    last=head;


    for(int i=1;i<8;i++){
        
        node*temp=NULL;
        temp =new node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    return head;
}



int main(){

    int A[]={1,2,3,4,5,6,7,8};
    node* head=NULL;
    head=new node;

    head=create(head,A);

    printlist(head);
}