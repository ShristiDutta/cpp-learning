//write a program to find area of circle and area of rectangle using the function.
#include<bits/stdc++.h>
using namespace std;
double areaofcircle( double radius){
double PI=3.141;
return PI * radius * radius;
}

double areaofrectangle(double length,double breadth) {
    return length * breadth;
}
int main() {
    double radius,length,breadth;
    cout << "enter the radius of a circle:" << endl;
    cin >> radius;
    cout << "the area of circle:" << areaofcircle(radius) << endl;
    cout << "enter the length of the rectangle:" << endl;
    cin >> length;


    cout << "enter the breadth of a rectangle:" << endl;
    cin >> breadth;
    cout << "the area of the rectangle:" << areaofrectangle(length,breadth) << endl;
    return 0;

}

