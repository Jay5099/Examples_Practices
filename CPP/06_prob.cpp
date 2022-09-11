#include<iostream>

using namespace std;

int main(){
    float n_small,n_large,cost,tax;
    cout<<"How many cleaned small room do you want? ";
    cin>>n_small;
    cout<<"How many cleaned large room do you want? ";
    cin>>n_large;
    cout<<endl<<endl;
    cout<<"Estimate for carpet cleaning service"<<endl;
    cout<<"numbers of small room "<<endl;
    cout<<"numbers of large room "<<endl;
    cout<<"Price per small room :$25 "<<endl;
    cout<<"Price per large room :$35 "<<endl;
    cost=(n_small*25)+(n_large*35  );
    cout<<"cost :$"<<cost<<endl;
    tax=(cost*6)/100;
    cout<<"Tax : $"<<tax<<endl;
    cout<<"========================================"<<endl;
    cout<<"Total estimate :$"<<tax+cost<<endl;
    cout<<"This estimated for 30 days "<<endl;
}