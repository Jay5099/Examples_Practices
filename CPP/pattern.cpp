#include<iostream>
using namespace std;

int main(){
    int i,j,k,n;
    cin>>n;

//  1234554321
//  1234**4321
//  123****321
//  12******21
//  1********1

    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<2*n;j++){
            
            if(n-k-i!=0 && j<n){
                cout<<k+1;
                cout<<" ";
                k++;
                continue;
            }
            else if(n<=j-i){
                cout<<k;
                cout<<" ";
                k--;
                continue;
            }
            else{
                cout<<"*";
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}