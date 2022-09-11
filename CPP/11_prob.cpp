#include<iostream>

using namespace std;

int sum(int &a,int &b);

int main(){
    int a{0},b{0},c{0};
    cout<<"Enter the num of a:";
    cin>>a;
    cout<<endl<<"Enter the b:";
    cin>>b;
    c=sum(a,b);
    cout<<endl<<"Ans of "<<a<<"+"<<b<<"="<<c;
}

int sum(int &a,int &b){
    return a*b;
}