#include <iostream>
using namespace std;
main ()
{
int bagSize;
int bagCost;
int area;
int result1;
int result2;


cout << " Enter Bag Size in Pounds .. ";
cin >> bagSize;
cout << " Enter cost of the bag .. ";
cin >> bagCost;
cout << " Enter area covered by each bag in square feet .. ";
cin >> area;


result1 = bagCost / bagSize;
result2 = area * bagSize;

cout << " Cost of the fertilizer per pound .. " << result1 << endl;
cout << " Cost of fertilizing the area per square feet .. " << result2 << endl;









}