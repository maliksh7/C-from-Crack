#include <iostream>
using namespace std;

int main(){
	int a =10;
	int *p;
	int **p1;
	p = &a;
	p1 = &p;
	
	cout << "Address of a(by a): " << &a << endl;
	cout << "Address of a(by p): " << p << endl;
	cout << "Address of a(by p1): " << *p1 << endl;
	cout << "Value of a(by a): " << a << endl;
	cout << "Value of a(by p): " << *p << endl;
	cout << "Value of a(by p1): " << **p1 << endl;
	
	
	
	return 0;
}
