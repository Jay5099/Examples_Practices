#include<iostream>
#include<vector>

using namespace std;
void fn(){
    int i{};
    float num,total{};
    char c;
    vector <float> vector1{};
    do{
        cout<<"\n-----------------------"<<endl<<"***********************"<<endl<<"-----------------------"<<endl;
    cout<<endl<<"P-print numbers"<<endl;
    cout<<"A-add number"<<endl;
    cout<<"M-Display mean of numbers"<<endl;
    cout<<"S-Display smallest number"<<endl;
    cout<<"L-Display Largest number"<<endl;
    cout<<"Q-Quit"<<endl<<endl;

    cout<<"Enter your choice:";
    cin>>c;
    if(c=='P' || c=='p'){
        cout<<"The numbers are :"<<endl;
        for(auto num: vector1 )
        cout<<num<<endl;
        
    }
    else if(c=='a'||c=='A'){
        cout<<"Enter the number :"<<endl;
        cin>>num;
        vector1.push_back(num);
        // for(auto num: vector1)
        // cout<<num<<endl;
        
    }
    else if(c=='m' || c=='M'){
        for(auto num: vector1){
            total+=num;
            i++;
        }
        cout<<"The mean of the all num are: "<<total/i<<endl;
        
    }
    else if(c=='q' || c=='Q'){
        cout<<"Have a nice day"<<endl;
    }}while(c !='q' && c !='Q');
 
}

int main(){
    fn();
}