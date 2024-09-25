/*
The program is supposed to calculate the sum of  distance between three points from each other.

For
x1 = 1 y1 = 1
x2 = 2 y2 = 4
x3 = 3 y3 = 6

Distance is calculated as : sqrt(x2-x1)2 + (y2-y1)2

*/

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float x1, y1, x2, y2, x3, y3;
	cout << "Enter x1,y1: ";
	cin >> x1 >> y1;
	cout << "Enter x2,y2: ";
	cin >> x2 >> y2;
	cout << "Enter x3,y3: ";
	cin >> x3 >> y3;

	float firstDiff = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float secondDiff = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float thirdDiff = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	cout << firstDiff + secondDiff + thirdDiff;
    return 0;
}