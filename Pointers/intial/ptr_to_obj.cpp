#include <iostream>
#include <string.h>
using namespace std;

class student{
	long roll;
	char name[10];
	public:
		void getdata(long x , char y[]){
			roll = x;
			strcpy(name,y);
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
	(*p).getdata(176137,"saad");
	p -> putdata();
	
	return 0;
}
