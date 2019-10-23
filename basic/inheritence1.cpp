#include <iostream>
using namespace std;

class Test{
	int x;
	public:
	virtual void print(){
			cout << "Test Class"<<endl;
		}
};

class a : public Test{
	public: 
	void print(){
			cout << "Class A"<<endl;
		}
};

int main()
{

	Test *t1 = new a();
	t1 -> print();
	a *a1 = new a();
	a1 -> print();
	return 0;
}
