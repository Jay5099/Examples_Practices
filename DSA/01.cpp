#include <iostream>
using namespace std;

int main() {
    int t,n,count=0,l=0;
    cin>>t;
    for(int i=0; i<t;i++){
        cin>>n;
        int a[n];
        int c[l];
        int d=0;
        for(int j=0,l=0;j<n;j++,l++){
            cin>>a[j];
            c[l]=a[j];
            }
            d=0;
        for(int i=0;i<n;i++){
            for(int l=0;l<n;l++){
                if(a[i]==c[l+i] && i!=(l+i)){
                    d++;
                    if(d==n-1){
                        break;
                    }
                    cout<<" D: "<<d<<endl<<endl;
                }
            
            if(count>d){
                continue;
            }
            else{
                if(d==n-1){
                        count=n-1;
                        break;
                    }
                count=d;
            }
            }
        }    
        cout<<count<<endl;
    }
	return 0;
}
