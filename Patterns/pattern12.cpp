/*

A1 B2 C3 D4
A1 B2 C3
A1 B2
A1

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n) {
        char ch='A';
        int num=1;
        int j=1;
        while(j<=n-i+1) {
            cout<<ch;
            cout<<num<<" ";
            j=j+1;
            ch++;
            num++;
        }
        cout<<endl;
        i=i+1;
        }
        return 0;

    } 