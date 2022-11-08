#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct node *last,*t;

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

int length(struct node *p){
    int l{0};

    while(p){
        l++;
        p=p->next;
    }

    return l;
} 

void display(struct node *p){
    
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p->next;
        }
    }

void insert(struct node *p,int index,int x){
    struct node *t;

    if(index<0||index>length(p)){
        return;
    }
    t=new node;
    t->data=x;
    if(index==0){
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
            t->next=p->next;
            p->next=t;
    }
}

void SortedInsert(struct node *p,int x){
    struct node *t,*q=NULL;
    t=new node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
        first=t;
    else    
     {
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
     }
}

int main(){

    int A[]{10,20,30,40,50,60,70};
    create(A,7);

    SortedInsert(first,23); 
    display(first);
    cout<<first->data;
    return 0;
}