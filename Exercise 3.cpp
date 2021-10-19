/**
* @ Nureen Batrisyia Balqis binti Karimudin 
* @ Matric No. : 2112830
* @ Lab #1 Section 4
*/

#include <iostream>

using namespace std;

int main() {
	
	int number, temp, firstdigit, secdigit, thirddigit, sum;
	
	cout << "Enter a number between 0 and 1000: ";
	cin >> number;
	
	firstdigit = number % 10;
	temp = number / 10;
	secdigit = temp % 10;
	temp = temp / 10;
	thirddigit = temp % 10;
	
	sum = firstdigit + secdigit + thirddigit;
	
	cout << " The sum of the digits is " << sum << endl;

	return 0;
}

