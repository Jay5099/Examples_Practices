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

int main(){
    
    int A[]{23,45,47,12,98,71,123};
    create(A,7);
    return 0;
}