#include<bits/stdc++.h>
using namespace std;

int main(){
    int n{INT_MAX},i;
    int A[n]{0};
    for( i=0;i<n;i++){
        cin>>A[i];
    }
    i=0;
    while(A[i]!=42 && A[i]!=0){
        cout<<A[i]<<endl;
    }
    return 0;
}