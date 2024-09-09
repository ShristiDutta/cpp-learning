//Write a program to check whether the no is prime or not,
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout << "enter a positive number:" << endl;
    cin >> number;
    if (number <= 1){
        cout << " not a prime number" << endl;
    }
    else {
        bool isPrime=true;//assume number is prime
    for (int i =2; i <=sqrt(number);i++){
        if(number % i== 0) {
            isPrime=false;
            break;
        }
}
if (isPrime)
    cout << number << "is a prime number" << endl;
else 
cout << number << "is not a prime number" << endl;
}
return 0;
}




