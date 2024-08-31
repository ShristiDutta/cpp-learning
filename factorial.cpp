//Write a program to find factorial of a number.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number,i;
    unsigned long long factorial = 1; //use unsigned long long to handle larger results
    cout << "enter a positive number:" << endl;
    cin >> number;
    if(number<0)
    {
        cout << "factorial of negative number doesn't exist!" << endl;    
        } else{
            for (int i=1;i<=number;i=i+1){
                factorial=factorial*i;
            }
            cout << "factorial of" << number <<"is" << factorial << endl;
            return 0;
        }
}