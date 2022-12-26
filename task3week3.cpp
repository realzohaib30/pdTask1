#include <iostream>
using namespace std;
main ()
{
int iv;
int a;
int fv;
int t;

cout << " Enter Initial Velocity .. ";
cin >> iv;
cout << " Enter Acceleration .. ";
cin >> a;
cout << " Enter Time .. ";
cin >> t;
fv = (a * t) + iv;
cout << " Final velocity is .. " << fv << endl;



}