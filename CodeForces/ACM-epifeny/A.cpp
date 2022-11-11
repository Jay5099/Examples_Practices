//alice and bob playing game

/*There is Grid of 1 X n. Initially Alice and Bob are standing on ith and jth cell respectively.

Alice makes the first move, and the turn goes alternatively.

In each turn player either moves to left or right by 1 cell (Note that its not allowed to move out of 1 X n Grid).

If any of the player is not able to make the move, he loses. And the other player wins.

Both Players play alternatively and optimally. Determine the winner. */

#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n>>i>>j;
    if((j-i)%2==1)
        cout<<"Bob";
    else
        cout<<"Alice";
}