#include <iostream>
using namespace std;

class test{
	private:
		static int count;
	public:
		test(){
			count++;
			cout << count <<" object created" << endl;
		}
		~test(){
			cout << count << " object destroyed" << endl;
			count --;
		}
};
int test :: count;
void fun(){
		cout << "Block 1" << endl;
		test t2,t3;
		cout << "Exit from Block 1" << endl;	
	}


int main(){
	cout << "...Main Block..." << endl;
	test t1;
	fun();
	cout << "Exit from Main"<<endl;
	return 0;
}
