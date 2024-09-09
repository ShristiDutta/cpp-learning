#include <bits/stdc++.h>
using namespace std;
void dosomething(int arr[],int n)
{
    arr[0] +=100;
    cout << arr[0] << endl;
}

int main()
{
   int n=5;
   int arr[5];
   for(int i=0;i<n;i=i+1){
    cin >> arr[i];
   } 
   dosomething(arr,n);
   cout << arr[0] << endl;
    return 0;
}