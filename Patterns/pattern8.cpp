/*

ABCD
ABC
AB
A

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int i=1;
    while ( i<=n) {
        char s='A';
        int j =1;
        while(j<=n-i+1)
        {
            cout << s;
            j=j+1;
            s++;
        }
        cout <<endl;
        i=i+1;

    }
    return 0;
}

     