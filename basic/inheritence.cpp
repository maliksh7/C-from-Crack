#include <iostream>
using namespace std;

class Test{
	int x;
	public:
		print(){
			"Test Class";
		}
};

class a : Test{
	public: 
		print(){
			"Class A"
		}
};

int main(
	Test *t1 = new Test();
	t1 -> print();
	a *a1 = new a();
	a1 -> print();
	return 0;
}
