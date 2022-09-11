#include<iostream>
#include<string.h>
#include<cctype>

using namespace std;

void encrypter(){
    string message,d_message{},s_message{},alphanum{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 "};
                      string s2{"*!QWRETY#$%^IOP1234567890&()-+HKLJGFDSAZXVBNMwrtyuiosfhjklmnbv{"};


    cout<<"Enter the massage you wanted to send in encryption: ";
    getline(cin,message);
    // cout<<endl<<message<<endl;
    cout<<"\n\nMessage is is encrypting..."<<endl<<endl;

    for(char c:message){
        size_t p=alphanum.find(c);
        if(p != string::npos){
            char n_c { s2.at(p)};
        // cout<<n_c<<endl;
            s_message+=n_c;
        }
        else{
            s_message+=c;
        }
    }

    cout<<s_message<<endl;

    cout<<"\n\nYour Decreptying massage....."<<endl;
    for(char c:s_message){
        size_t p=s2.find(c);
        if (p!=string::npos){
            char n_c { alphanum.at(p)};
            d_message+=n_c;
        }
        else{
            d_message+=c;
        }
    }
    cout<<d_message<<endl;
}

int main(){
    encrypter();
}