#include <iostream>
#include <string.h>
using namespace std;

class student{
	long roll;
	string name;
	public:
		void getdata(long x , string y){
			roll = x;
			name = y;
		}
		void putdata(){
			cout << "Student name: " << name<<endl;
			cout << "Student Roll number: " << roll;
		}
};

int main(){
	student obj;
	student *p;
	p = &obj;
	(*p).getdata(176137,"Muhammad Saad Hassan");
	p -> putdata();
	
	return 0;
}
