#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node*next;
};

class linklist{
    private:
        node*head;

    public:
        linklist(){head=NULL;}
        linklist(int A[],int n);
        ~linklist();

        void printlist();
        void Insert(int index,int x);
        int Delete(int index);
        int Length();
};

linklist::linklist(int A[],int n){
    node*last,*temp;
    int i{};

    head=new node();
    head->data=A[0];
    head->next=head;
    last=head;

    for ( i = 1; i <n; i++){
        temp=new node();
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

linklist::~linklist(){
    node*p=head;
    while(head){
        head=head->next;
        delete p;
        p=head;
    }
}

void linklist::printlist()
{
 node *p=head;

 do{
 cout<<p->data<<" ";
 p=p->next;
 }while(p!=head);
 cout<<endl;
}


int linklist::Length()
{
 node *p=head;
 int len=0;

 do{
 cout<<p->data<<" ";
 p=p->next;
 len++;
 }while(p!=head);
 return len;
}

void linklist::Insert(int index,int x){
    node*temp,*p=head;
    if(index <0 || index > Length())
        return;

    if(index==0){
        temp=new node();
        temp->data=x;
        if(head==NULL){
            head=temp;
            head->next=head;
        }  
        else{
            while(p->next!=head)p=p->next;
            p->next=temp;
            temp->next=head;
            head=temp;
        }
    }
    else{
        for(int i=0;i<index-1;i++)p=p->next;
        temp=new node();
        temp->data=x;
        temp->next=p->next;
        p->next=temp;
    }
}

int linklist::Delete(int index){
    node *p,*q=NULL;
    int x=-1;

    if(index < 1 || index > Length())
        return -1;
    if(index==1){
        while(p->next!=head) p=p->next;
        x=head->data;
        if(head==p){
            free(head);
            head=NULL;
        }
        else{
            p->next=head->next;
            free(head);
            head=p->next;
        }
        }
    else{
        for(int i=0;i<index-2;i++)
            p=p->next;
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
 return x;
}

int main()
{
 int A[]={1,2,3,4,5};
 linklist l(A,5);

 l.Insert(3,10);

 l.printlist();

 return 0;
}