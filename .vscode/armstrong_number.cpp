//Write a program to check Armstrong no.
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int number,originalNumber,digit,sum=0;
   cout << "enter a three digit number:" << endl;;
   cin >> number;
   originalNumber=number;
   while(number>0)
   {
    digit= number % 10;
    sum +=pow(digit,3);
    number /=10;
   }
   if(sum == originalNumber)
   {
    cout << originalNumber << "is an armstrong number:" << endl;
   }
   else{
    cout << originalNumber << "is not an armstrong number:" << endl;
   }
   return 0;
}