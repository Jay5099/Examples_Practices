//create linklist using class and push method:


#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
};

void push(node**head_ref,int new_data){
    
        node*new_node=new node();
        new_node->data=new_data;
        new_node->next=(*head_ref);
        (*head_ref)= new_node;
    
}

void printlist(node*head){
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<"\n";
}

int main(){

    int n,k;
    node*head=NULL;
    node*last=NULL;

    cout<<"Enter size of linklist:";
    cin>>n;

    for (int i = 0; i <n; i++){
        cout<<"Enter to push:";
        cin>>k;
        push(&head,k);
        printlist(head);
    }

}