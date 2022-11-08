#include<iostream>

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
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int Max(struct node *p){
    int max=INT32_MIN;
    while(p){
        if (p->data>max)
            max=p->data;
        p=p->next;  
    }
    return max;
}

int RMax(struct node *p){
    int x=0;
    if(p==0)
        return INT32_MIN;
    x=RMax(p->next);
    if(x>p->data)
        return x;
    else
        return p->data; 
    
}

int main(){
    
    int A[]{23,45,47,12,98,71,123};
    create(A,7);

    cout<<"Max num is:"<<Max(first)<<endl;
    cout<<"Max num is:"<<RMax(first)<<"(Recursively)"<<endl;
    return 0;
}