// Given length in inches, this program outputs the equivalent // length in feet and remaining inch(es).
#include <iostream>
using namespace std;

int main() { 

int inches; //variable to store total inches
inches = 100; //store 100 in the variable inches
cout << "inches = " << inches << endl;
cout << inches / 12 << " feet(foot) and ";
cout << inches % 12 << " inch(es).";
	 
return 0;	 



}
