#include<iostream>
#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new node ;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Rdisplay(struct node *p){
    if(p!=NULL){
        Rdisplay(p->next);
        cout<<p->data<<" ";

    }
}

int main(){
    struct node *temp;
    int A[]={0,1,6,9,3,6,4};
    create(A,7);

    Rdisplay(first);
    return 0;
}