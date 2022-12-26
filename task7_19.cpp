#include <iostream>
using namespace std;
main ()
{
string name;
float matric;
float intermediate;
float ecat;
float matricPercentage;
float intermediatePercentage;
float ecatPercentage;
float matricAggregate;
float intermediateAggregate;
float ecatAggregate;
float result;



cout << " Enter Your Name .. ";
cin >> name;
cout << " Enter Your Matric Marks (out of 1100) .. ";
cin >> matric;
cout << " Enter Your Intermediate Marks (out of 550) .. ";
cin >> intermediate;
cout << " Enter Your E-Cat Marks (out of 400) .. ";
cin >> ecat;

matricPercentage = matric * 100 / 1100;
intermediatePercentage = intermediate * 100 / 550;
ecatPercentage = ecat * 100 / 400;
matricAggregate = 10 * matricPercentage / 100;
intermediateAggregate = 40 * intermediatePercentage / 100;
ecatAggregate = 50 * ecatPercentage / 100;

result = matricAggregate + intermediateAggregate + ecatAggregate;
cout << " Your Aggregate is .. " << result << endl;



}