/**
* @ Nureen Batrisyia Balqis binti Karimudin 
* @ Matric No. : 2112830
* @ Lab #1 Section 4
*/

#include <iostream>

using namespace std;

int main() {
	double celsius;
	double farenheit;
	
	cout << "Enter a degree in Celcius: "; 
	cin >> celsius;
	
	farenheit = (9.0/5) * celsius + 32;
	
	cout << celsius << " Celcius is " << farenheit << " Farenheit";

	return 0;
}

