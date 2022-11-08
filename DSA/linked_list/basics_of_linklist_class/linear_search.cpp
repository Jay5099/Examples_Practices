// linklist using class and function
// linear search


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

 node* create(node*head,int A[],int n){
    node*last=NULL;

    head=new node();
    head->data=A[0];
    head->next=NULL;
    last=head;


    for(int i=1;i<n;i++){
        
        node*temp=NULL;
        temp =new node();
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    return head;
}

node*lsearch(node*p,int k){
    while(p!=NULL){
        if(k==p->data)
            return p;
        p=p->next;
    }
    return NULL;
}

int main(){

    int n,k;
    cout<<"Enter the size of linklist:";
    cin>>n;
    int A[n]={};
    cout<<"Enter elements of linklist:";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    node* head=NULL;
    node* search=NULL;
    head=new node();

    head=create(head,A,n);

    printlist(head);

    cout<<"Enter the element to search:";
    cin>>k;
    search=lsearch(head,k);
    if(search)
    cout<<"The element is found!";
    else cout<<"Element not found!";
}