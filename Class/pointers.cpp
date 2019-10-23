#include <iostream>
using namespace std;

//////////////////////////////////////
///		Whole Concept of 		//////
///		Pointers.				/////
///								/////
///								////
///								////								//////
/////////////////////////////////////

/*
class classExample{
	public:
		void setX(int a);
		void print();
	private:
		int x;	
};

void classExample :: setX(int a)
{
	x = a;
}

void classExample :: print()
{
	cout << "x = " << x << endl;
}




int *p;
char *name;
string *str;

p = new int;    // Dynamic variable

*p = 28

name = new char[5];

strcpy(name, "John");

str = new string;

*str = "Sunny Day";



int *p;
p = new int[10]
*/
int main()
{
	

	classExample *cExpPtr;   //Line 1
	classExample cExpObject; //Line 2
	
	cExpPtr = &cExpObject;   //Line 3
	
	cExpPtr -> setX(23);
	cExpPtr -> print();
	
	int *p;
	int x = 37;
	
	cout << "Line 1: x = " << x << endl; //Line 1
	
	p = &x;    //Line 2
	
	cout << "Line 3: *p = " << *p   
		 << ", x = " << x << endl;   //Line 3
		 
	*p = 58;            //Line 4
	 
	cout << "Line 5: *p = " << *p
	 	 << ", x = " << x << endl;  //Line 5
	
	cout << "Line 6: Address of p = " << &p << endl; //Line 6
	
	cout << "Line 7: Value of p = " << p << endl; //Line 7
 	
	cout << "Line 8: Value of the memory location " 
	 	 << "pointed to by *p = " << *p << endl; //Line 8 
	 	  
	cout << "Line 9: Address of x = " << &x << endl; //Line 9 
	cout << "Line 10: Value of x = " << x << endl; //Line 10
*/

	
	return 0;	 	  
	
	
}
