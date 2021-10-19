/**
* @ Nureen Batrisyia Balqis binti Karimudin 
* @ Matric No. : 2112830
* @ Lab #1 Section 4
*/

#include <iostream>

using namespace std;

int main() {
	
	double subtotal, gratuityrate, gratuity, total;
	
	cout << "Enter the subtotal and a gratuity rate: ";
	cin >> subtotal >> gratuityrate;
	
	gratuity = subtotal*(gratuityrate/100);
	total = gratuity + subtotal;
	
	cout << "The gratuity is $" << gratuity << " and total is $" << total << endl;
	
	return 0;
}
