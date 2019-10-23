#include <iostream>
using namespace std;

class matrix{
	public:
		virtual void print() = 0;
};
class transform:public matrix{
	cint **p;
	public:
		transform(){
			p = new int *[5];
			for(int i = 0;  i<5; i++){
				p[i] = new int[8];
			}
			
			for(int i = 0;  i<5;  i++){
				for(int j=0;  j<8;  j++){
					p[i][j] = 0;
				}
			}
				
		}
		transform(const transform &obj){
			for(int i = 0;  i<5;  i++){
				for(int j=0;  j<8;  j++){
					p[i][j] = obj.p[i][j];
				}
			}
		}
		
		void intialize(){
			for(int i = 0;  i<5;  i++){
				for(int j=0;  j<8;  j++){
					cin>>p[i][j];
				}
			}
				
		
		}
		void print(){
			for(int i = 0;  i<5;  i++){
				for(int j=0;  j<8;  j++){
					cout<<p[i][j]<<" ";
				}
				cout<<endl;
			}
				
		
		}
};

int main(){
	transform obj,obj1;
	//int c[2][2];
	//obj.transform();
	obj.intialize();
	obj1.intialize();
	obj.print();
	obj1.print();
	
	return 0;
}
