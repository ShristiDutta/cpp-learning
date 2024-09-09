//Write a program to print the Month name using switch case statements(Eg: for input 1-> output: January)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int month;
    cin >> month;
    switch (month){
    case 1:
    cout << "january";
    break;
    case 2:
    cout << "february";
    break;
    case 3: 
    cout << "march";
    break;
    case 4:
    cout << "april";
    break;
    case 5:
    cout << "may";
    break;
     case 6:
    cout << "june";
    break;
     case 7:
    cout << "july";
    break;
     case 8:
    cout << "august";
    break;
     case 9:
    cout << "september";
    break;
     case 10:
    cout << "october";
    break;
     case 11:
    cout << "november";
    break;
     case 12:
    cout << "december";
    break;
    default:
    cout << "invalid choice";
}
cout << " check" ;
return 0;
}