/*

*
**
***
***
**
*

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n) {
        int j =1;
        while(j<=i) {
            cout <<"*" ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    i=n;
    while(i>0) {
        int j=1;
        while(j<=i) {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}