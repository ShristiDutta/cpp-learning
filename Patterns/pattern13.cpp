/*

For n=4:
1   3   5   7
2   4   6   8
9  11  13  15
10 12  14  16

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1;
    int odd = 1;
    int even = 2;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            if (i % 2 == 0)
            {
                cout << even << " ";
                even += 2;
                j++;
            }
            else
            {
                cout << odd << " ";
                odd += 2;
                j++;
            }
        }
        cout << endl;
        i++;
    }
    return 0;

}