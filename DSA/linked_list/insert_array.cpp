#include<iostream>

int print(int *a,int &n);
int insert(int *a,int &n);

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[100]{0};
    int *new_a{nullptr};

    for (size_t i = 0; i < n; i++){
        cout<<"Enter "<<i+1<<"th: ";
        cin>>a[i];
    }
    char c{0};
    do{
        cout<<"-----------------"<<endl;
        cout<<"type 1 to insert:"<<endl;
        cout<<"type 2 to delete:"<<endl;
        cout<<"-------***-------"<<endl;
        cin>>c;


        if (c=='1'){
            *new_a=insert(a,n);
            cout<<"you out!!";
        }
        else if(c=='2'){

        }

    print(new_a,n);
    
    }
    while (c!='0');
    return 0;
}

int insert(int *a,int &n){
    int pos,i{0},num{};
    // a= new int[n];

    cout<<"Enter where to insert: ";
    cin>>pos;

    cout<<"Enter the num:";
    cin>>num;

    if (pos<0 || pos>n+1)
        cout<<"invalid request!"<<endl;
    else{

        for ( i = n-1; i >=pos-1; i--){
            a[i+1]=a[i];
        }
            a[pos-1]=num;
            n++;

        cout<<"[ ";
        for (int i = 0; i < n; i++){
            cout<<a[i]<<" ";
            }
        cout<<"]";
        
    }
    return *a;
}
print(int *a,int &n){
    
    for (int i = 0; i < n; i++)
    {
        cout<<"[";
        cout<<a[i];
        cout<<"]";
    }
    
}