/*There exist a king in wonderland. He wants to appoint a new senator for his kingdom, So he decided to give a task among candidates and whoever solves it first will be appointed as senator. You are among the candidates. The king has given an array A of length N where 1<=N<=105. He defined the goodness value of the array as the number of such pairs ( i, j ) such that i < j and Ai != Aj. Also the king want to maximize the goodness of the given array, So he allowed to make at most K operations on the array , in which one can choose any index of the array and can change its value to any number between 1 to 109 , both inclusive.

Input
First Line contains two integers N and K.

Second line contains N space-separated integers Ai where 1<=i<=N and 1<=Ai<=109.

Output
A single integer B which is the maximum value of goodness of the array.*/

#include<iostream>

using namespace std;

int main(){
    int n,k,sum{};
    cin>>n>>k;
    int A[n];

    for (int i = 0; i < n; i++){
        cin>>A[i];
    }
    for (int i = 0; i < n; i++){
        if(i==k)
            continue;
        sum+=A[i];
    }
    cout<<sum<<endl;
}