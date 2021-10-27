/** 
* Nureen Batrisyia Balqis binti Karimudin
* Matric No. : 2112830
* Lab #2 Section 4
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int hour, mins;
	double speedA, speedB;
	double distanceA, distanceB;
	double minutes, hours;
	double shortdist;
	
	cout << "Enter the average speed of car A : ";
	cin >> speedA;
	
	cout << "Enter the average speed of car B : ";
	cin >> speedB;
	
	cout << "Enter the elapsed time (in hours and minutes) :";
	cin >> hour >> mins;
	
	minutes = hour * 60;
	hours = (minutes + mins) / 60;
	distanceA = speedA * hours;
	distanceB = speedB * hours;
	
	shortdist = sqrt((distanceA * distanceA) + (distanceB * distanceB));
	
	cout << "The (shortest) distance between the cars is : " << fixed << setprecision(2) << shortdist << endl;
	
	

	return 0;
}

