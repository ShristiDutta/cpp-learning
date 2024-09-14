// sum and average of array elements

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

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "\n\nsum is " << sum << endl;
    cout << "average is " << sum / n << endl;
    return 0;
}