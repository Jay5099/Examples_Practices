/*You are given a String consisting of lowercase English letters. Print kth lexicographically smallest permutation.

A string A is said to be a permutation of a string B when any character occurs the same number of times in A and B

If a string is xyx then its permutations are [xxy,xyx,yxx]

A string a is lexicographically smaller than a string b if and only if one of the following holds: • a is a prefix of b, but a≠b • in the first position where a and b differ, the string a has a letter that appears earlier in the alphabet than the corresponding letter in b

Input
The first line contains a string s(1≤|s|≤8). The second line contains k

Output
Print kth lexicographically smallest string.*/

#include<iostream>
#include<string>
#include <algorithm>
using namespace std;


void sortString(string &str)
{
   sort(str.begin(), str.end());
}

int main(){

    int k;
    string str{};
    cin>>str>>k;
    sortString(str);
    for(int i=1;i<k;i++){
    next_permutation(str.begin(),str.end());
}
cout<<str;
}