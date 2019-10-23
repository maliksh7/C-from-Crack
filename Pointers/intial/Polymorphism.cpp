#include <iostream>
using namespace std;

class A{
	public:
		virtual int sum() = 0;
};
class B:public A{
	int a , b;
	public:
		B(int x, int y)
		{
			a = x;
			b = y;
		}
		int sum(){
			return (a+b);
		}
};
class C:public A{
	int a , b , c;
	public:
		C(int x , int y , int z){
			a = x;
			b = y;
			c = z;
		}
		int sum(){
			return (a+b+c);
		}
};

int main(){
	A *p[2];
	B objb(12,13);
	C objc(12,13,14);
	p[0] = & objb;
	cout << p[0] -> sum();
	cout << endl;
	p[1] = & objc;
	cout << p[1] -> sum();
	return 0;
	
	
}
