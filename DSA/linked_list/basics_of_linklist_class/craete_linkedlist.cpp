/* create linked list by user only  */

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node*next;
};

void printlist(node*p){
    while(p!=NULL){
            cout<<p->data<<"->";
            p=p->next;
        }
        cout<<"\n";
}

int main(){

    int n,i{2};
    node*first=NULL;
    node*last=NULL;
    first =new node();

    cout<<"Enter size of linked list:";
    cin>>n;

    cout<<"Enter elments 1st:";
    cin>>first->data;
    first->next=NULL;
    last=first;
    printlist(first);

    while(n-1){
        
        node*temp=NULL;
        temp=new node();
        cout<<"Enter elments "<<i++<<"st:";

        cin>>temp->data;
        temp->next=NULL;
        last->next=temp;
        last=temp;

        cout<<"This is link list:"<<endl;
        printlist(first);
        n--;
    }
}