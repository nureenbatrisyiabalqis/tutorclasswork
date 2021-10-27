/** 
* Nureen Batrisyia Balqis binti Karimudin
* Matric No. : 2112830
* Lab #1 Section 4
*/

#include <iostream>

using namespace std;

int main() {
	
	double lengthofwire;
	double length;
	double width;
	
	cout << "Enter the length of the wire : ";
	cin >> lengthofwire;
	
	width = lengthofwire / 5;
	length = width * 1.5;
	
	cout << "Length = " << length << endl;
	cout << "Width = " << width << endl;

	return 0;
}

