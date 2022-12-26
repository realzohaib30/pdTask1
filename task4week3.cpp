#include <iostream>
using namespace std;
main ()
{
string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
int result;

cout << " Enter Your Name .. ";
cin >> name;
cout << " Enter Subject 01 Marks .. ";
cin >> subject1;
cout << " Enter Subject 02 Marks .. ";
cin >> subject2;
cout << " Enter Subject 03 Marks .. ";
cin >> subject3;
cout << " Enter Subject 04 Marks .. ";
cin >> subject4;
cout << " Enter Subject 05 Marks .. ";
cin >> subject5;
result = (subject1 + subject2 + subject3 + subject4 + subject5) * 100 / 500;
cout << " Your Percentage is .. " << result << endl;
}