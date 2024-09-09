#include<bits/stdc++.h>
using namespace std;
void dosomething(string &s)
{
    s[0] = 'd';
    cout << s << endl;
}
int main()
{
    string s = "shristi";
    dosomething(s);
    cout << s << endl;
    return 0;
}