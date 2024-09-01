//Write a program to convert the temperature centigrade into fahreheit.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float celsius,fahrenheit;
    cout << "enter temperature in celsius" << endl;
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;
    cout << "temperatur in fahrenheit" << fahrenheit << endl;
    return 0; 
}