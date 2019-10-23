#include <iostream>
using namespace std;

class test{
	int a, b, c;
	public:
		void getdata(int x, int y, int z);
		void operator -();
		void disp();
};

void test :: getdata(int x, int y, int z)
{
	a = x;
	b = y;
	c = z;
}

void test :: operator-()
{
	a = -a;
	b = -b;
	c = -c;
}
void test :: disp()
{
	cout<<"Value of a: "<<a<<endl;
	cout<<"Value of b: "<<b<<endl;
	cout<<"Value of c: "<<c<<endl;
}

int main(){
	test obj;
	cout<<"Values of a,b,c before operational Overloading...."<<endl;
	cout<<endl;
	obj.getdata(-5,4,100);
	obj.disp();
	- obj;
	cout<<endl;
	cout<<"Values of a,b,c after operational Overloading...."<<endl;
	cout<<endl;
	obj.disp();
	
	return 0;
}
