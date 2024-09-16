/*
ABCDE
FGHI
JKL
MN
O
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=5;
    int i=1;
    char s='A';
    while(i<=n) {
        int j=1;
        while(j<=n-i+1) {
           cout<<s;
           j=j+1;
           s++; 
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}