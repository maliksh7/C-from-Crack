#include <iostream>
using namespace std;
void swap(int , int );

int main(){
	
	int a = 100;
	int b = 200;
	
	cout << "...Before Swapping..." << endl;
	cout << "\tValue of a: " << a << endl;
	cout << "\tValue of b: " << b << endl;
	swap(a,b);
	cout << "...After Swapping..." << endl ;
	cout << "\tValue of a: " << a << endl;
	cout << "\tValue of b: " << b << endl;
}

void swap(int x , int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}
