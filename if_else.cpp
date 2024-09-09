#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout << "enter an integer:";
    cin >> number;
    if(number % 2 == 0)
    {
        cout << number<< " is an even number" << endl;
    }
    else{
        cout << number << " is an odd number" << endl;
    }
    return 0;
    }
