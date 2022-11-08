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
        cout<<endl;
        // for(n::first){
        //     cout<<n<<" ";
        // }
        //     cout<<endl;
    }

int delete_key(int pos){
    struct node *p,*q;
    int x{-1},i;

    if(pos==1){
        x=first->data;
        p=first;
        first=first->next;
        delete p;
    }    
    else  {
        p=first;
        q=NULL;
        for(i=0;i<pos-1 &&p;i++){
            q=p;
            p=p->next;
        }
        if(p){
            q->next=p->next;
            x=p->data;
        }
        delete p;
    }
    return x;
}

int main(){

    int A[]{23,45,47,12,98,71,123};
    create(A,7);
    int pos;
    cout<<"Enter the pos:";
    cin>>pos;
    delete_key(pos);
    display(first);
    return 0;
}