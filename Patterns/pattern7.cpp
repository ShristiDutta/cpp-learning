/*

ABC
ABC
ABC


*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        char s = 'A';
        int j = 1;
        while (j <= n)
        {
            cout << s;
            j = j + 1;
            s = s + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}