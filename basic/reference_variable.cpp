#include <iostream>
using namespace std;

int main(){
	int a = 100;
	int &ref = a;
	cout<<"Value of A: "<<a<<endl;
	cout<<"Value of ref: "<<ref<<endl;
	cout<<"Address of A: "<<&a<<endl;
	cout<<"Address of ref: "<<&ref<<endl;
	return 0;	
}
