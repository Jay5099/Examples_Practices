#include<iostream>
#include<math.h>

using namespace std;

class node{
public:
    int coeff;
    int exp;
    struct node *next;
};

 node* create(node*poly){
    node*temp=NULL;
    node*last=NULL;
    int n,i;

    cout<<"Enter the number of terms:";
    cin>>n;
    cout<<"Enter each term with coeff and exp:";

    for(i=0;i<n;i++){
        temp=new node();
        cin>>temp->coeff>>temp->exp;
        temp->next=NULL;

        if(poly==NULL)
            poly=last=temp;
        else{
            last->next=temp;
            last=temp;
        }    

    }
    return poly;
}


long Eval(node*p,int x){
    long val{};

    while(p){
        val+=p->coeff*pow(x,p->exp);
        p=p->next;
    }
    return val;
}

void Display( node *p)
{
while(p)
{
printf("%dx%d +",p->coeff,p->exp);
p=p->next;
}
printf("\n");
}
int main(){
    int x,ans;
    node *poly=NULL;
    poly=create(poly);
    Display(poly);
    
    cout<<"Enter the val of x:";
    cin>>x;
    ans=Eval(poly,x);
    cout<<ans<<"\n";
}