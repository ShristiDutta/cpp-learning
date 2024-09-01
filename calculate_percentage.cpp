//Write a program to take input of 5 subject . find total and calculate percent. And finally print the grade of the student following KIIT grading system(O, E, A, B, C, D, F)
#include<iostream>
using namespace std;
int main(){
    const int subject=5;
    float marks[subject];
    float total=0.0;
    float percentage;
    char grade;\
     
    cout << "enter marks of science:" << endl;
    cin >> marks[0];
    cout << "enter marks of maths:" << endl;
    cin >> marks[1];
    cout << "enter marks of biology:" << endl;
    cin >> marks[2];
    cout << "enter marks of english:" << endl;
    cin >> marks[3];
    cout << "enter marks of social:" << endl;
    cin >> marks[4];

//calculate total
for (int i =0;i< subject;i=i+1){
total += marks[i];
}


//calculate percentage
percentage = (total /(subject * 100)) * 100;

if ( percentage >= 90) {
    grade = 'O';
}
else if (percentage >= 80) {
    grade = 'E';
}
else if (percentage >= 70) {
    grade = 'A';
}
else if (percentage >=60) {
    grade = 'B';
}
else if (percentage >=50) {
    grade = 'C';
}
else if (percentage >=40) {
    grade = 'D';
}
else {
    grade = 'F';
}

cout << "total marks:" << total <<endl;
cout << "percentage:" << percentage
<< endl;
cout << "grade:" << grade << endl;

return 0;
}








