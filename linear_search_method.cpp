//. Write a program to search an element from an array by linear search method.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,searchelement;
    cout <<"enter the size of an array:";
    cin >> n;
    int arr[n];
    cout <<"enter" << n << "elements";
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element to be searched";
    cin >> searchelement;

    bool found=false;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==searchelement)
        {
            cout << "element found at index" << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "elements not found in the array." << endl;
    }
    return 0;
}