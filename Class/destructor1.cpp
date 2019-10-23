#include <iostream>
using namespace std;

class complex{
	int a,b;
	public:
		complex(){
			cout << "Constructor" << endl ;
		}
		~complex(){
			cout << "Destructor";
		}
};

/*void fun(){
	complex obj;
}*/

int main(){
	complex obj;
	return 0;
}
