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

void display(struct node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
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

int Rlength(struct node *p){
    if(p!= NULL)
        return Rlength(p->next)+1;
    else
        return 0;
}

int sum(struct node *p){
    int sum{0};
    while (p!=NULL){
        sum+=p->data;
        p=p->next;  
    }
    return sum;
}

int Rsum(struct node *p){
    if (p!=NULL)
        return p->data+Rsum(p->next);
    else
        return 0;
}

int main(){
    int A[]={100,32,75,45,87};
    create(A,5);
    // display(first);
    cout<<"The length of linklist is "<<length(first)<<endl;
    cout<<"The length of linklist is "<<Rlength(first)<<"(with recursive method)"<<endl;
    cout<<"The sum of linklist is "<<sum(first)<<endl;
    cout<<"The sum of linklist is "<<Rsum(first)<<"(with recursive method)"<<endl;
    return 0;
}