//Write a program to find sum of 10 natural no using 1-D array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
int numbers[10];
int sum=0;
for (int i=0;i<10;i=i+1)
{
    numbers[i]=i+1;
}
for(int i=0;i<10;i=i+1){
    sum+=numbers[i];
}
cout << "sum of first 10 natiural number is" << sum << endl;
return 0;
}
