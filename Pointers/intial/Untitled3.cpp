#include <iostream>
using namespace std;

void xyz(){
	int a = 0;
	int b = 0;
	a ++;
	b = b + 2;
	cout << a << "\n" << b;
	cout << endl;
}
int main(){
	for(int i = 0; i<5; i++){
	
	xyz();
	cout << endl;

	}
	 
	
	return 0;
}
