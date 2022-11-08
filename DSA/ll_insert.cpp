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

int main(){

    int A[]{23,45,47,12,98,71,123};
    int index,number;
    create(A,7);
    insert(first,3,172);
    insert(first,3,78);
    insert(first,3,56);
        display(first);
    char check;
    cout<<endl<<"Do you want insert number? y/n: "<<endl;
    cin>>check;
    while(check !='n' && check !='N'){
        cout<<"Enter index and number: "<<endl;
        cin>>index>>number;
        insert(first,index,number);
        cout<<endl;
        display(first);
        cout<<endl;
        cin>>check;
    }
    return 0;
}