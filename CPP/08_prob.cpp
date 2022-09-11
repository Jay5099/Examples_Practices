#include<iostream>

using namespace std;
int  main(){
    int cent,dollor,quarters,dimes,nickels,pennies,balance;
    cout<<"Enter the amount in cents:";
    cin>>cent;
    cout<<endl<<endl;
    
    cout<<"provide change as fallow"<<endl;
    dollor=cent/100;
    cout<<"dollors : "<<dollor<<endl;

    balance=cent-(dollor*100);
    quarters=balance/25;
    cout<<"quarters : "<<quarters<<endl;

    balance=balance-(quarters*25);
    dimes=balance/10;
    cout<<"dimes : "<<dimes<<endl;

    balance=balance-(dimes*10);
    nickels=balance/5;
    cout<<"nickels : "<<nickels<<endl;

    pennies=balance-(nickels*5);
    cout<<"pennies :"<<pennies<<endl;
}