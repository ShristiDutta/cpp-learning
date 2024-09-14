// Odd elements of array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // Taking user input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << arr[i] << " ";
            sum += arr[i];
        }
    }
    cout << "\nsum=" << sum << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] % 2 == 0)
            {
                cout << arr[i] << " ";
            }
            else
            {
                cout << "get out "
                     << " ";
            }
        }
    }

    cout<<endl;


int search;
cin >> search;
    for(int i =0;i<n;i++) {
        if(search==arr[i]) {
            cout << "found" << " ";
        }
        else {
            cout << "  nahi mila🥺😭😭  ";
        }

    }
    return 0;
}