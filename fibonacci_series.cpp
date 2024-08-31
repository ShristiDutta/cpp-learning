//7. Write a program to find Fibonacci series upto n terms
#include<bits/stdc++.h>
using namespace std;
void printfibonacci(int n)
{
    if (n <= 0){
        cout << "number of terms should be greater than 0!";
    }
    if (n ==1) {
        cout << "0" << endl;
    }
    //initialize the first two terms 
    int a=0,b=1;
    cout << "fibonacci series upto" << n << "terms:" << endl;
    cout << a << " " << b << " " ; 
    for (int i=2;i<n;i=i+1){
    int nextTerm =a+b;
    cout << nextTerm << " ";
    a=b;
    b=nextTerm;
}
}

int main()
{
    int n;
    cout << "enter the number of terms for the fibonacci series:";
    cin >> n;
    printfibonacci(n);
    return 0;

}