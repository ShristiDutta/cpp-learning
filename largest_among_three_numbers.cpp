#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout << "enter a:" << endl;
     cin >> a;
    cout << "enter b:" << endl;
    cin >> b;
    cout << "enter c:" << endl;
    cin >> c;
    if(a>b && a>c)
    {
        cout << "a is the largest number!" << endl;
    }
    else if(b>a && b>c)
    {
        cout << "b is the largest number!" << endl;
    }else
    {
        cout << "c is the largest!" << endl;
    }
    return 0;
}