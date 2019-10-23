#include <iostream>
using namespace std;

class A{
	protected:
		int a;
	public:
		void get_a(int x){
			a = x;
		}	
};

class B{
	protected:
		int b;
	public:
		void get_b(int y){
			b = y;
		}	
};

class C:public A , public B{
	int c;
	public:
		void add(){
			c = a + b;
		}
		void display(){
			cout << "a is: "<<a;
			cout << endl;
			cout << "b is: "<<b;
			cout << endl;
			cout << "Sum of a & b: "<<c;
		}
};


int main(){
	C obj;
	obj.get_a(100);
	obj.get_b(200);
	obj.add();
	obj.display();
	return 0;
}
