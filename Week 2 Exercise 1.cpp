/** 
* Nureen Batrisyia Balqis binti Karimudin
* Matric No. : 2112830
* Lab #1 Section 4
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double weightkg;
	double weightpound;
	
	cout << "Enter your weight in kilogram :";
	cin >> weightkg;
	
	weightpound = weightkg * 2.2; 
	
	cout << fixed << setprecision(2);
	cout << "Your weight in pound is : " << weightpound << endl;
	
	

	return 0;
}

