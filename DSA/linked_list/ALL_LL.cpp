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

void Rdisplay(struct node *p){
    if(p!=NULL){
        Rdisplay(p->next);
        cout<<p->data<<" ";

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

struct node * Lsearch(struct node *p,int key){

    struct node *q; 
    q= new node;
    while (p!=NULL){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

struct node *Rsearch(struct node *p,int key){
    if (p==NULL)
        return NULL;
    if(p->data==key)
        return p;
    return Rsearch(p->next,key); 
}

// void display(struct node *p){
//     while(p!=NULL){
//         cout<<p->data<<" ";
//         p=p->next;
//     }
// }

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
    
    int A[]{23,45,47,12,98,71,123};
    create(A,7);
    
    display(first);
    cout<<endl;
    Rdisplay(first);
    cout<<endl;

    cout<<"The length of linklist is "<<length(first)<<endl;
    cout<<"The Sum of linklist elements are "<<sum(first)<<endl;
    cout<<"The Sum of linklist elements are "<<Rsum(first)<<"(REcursively)"<<endl;
    
    struct node *temp;
    int key;
    cout<<"Enter key to linear serch:";
    cin>>key;
    temp=Lsearch(first,key);
    cout<<"The key of linklist elements is "<<temp->data<<endl;


    int index,number;
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

    int keys;
    cout<<"Enter key to insert:";
    cin>>keys;
    SortedInsert(first,keys);
    display(first); 
    return 0;
}