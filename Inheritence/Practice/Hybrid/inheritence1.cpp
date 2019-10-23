#include <iostream>
using namespace std;

class student{
	int roll;
	public:
		void getroll(int x){
			roll = x;
		}
		void putroll(){
		cout << "Roll number: " << roll;
		}
};
class test : public student{
	protected:
		float m1,m2;
	public:
		void getmarks(float x,float y){
			m1 = x;
			m2 = y;
		}
		void putmarks(){
			cout << "Marks Obtained....";
			cout << "Marks in 1st Subject: " << m1;
			cout << endl;
			cout << "Marks in 2nd Subject: " << m2;		
		}
}; 

class sports : public student{
	protected:
		float sp;
	public:
		void getsp(float x){
			sp = x;
		}
		void putsp(){
			cout << endl;
			cout << "Sports Scores: "<< sp;
		}
};

class result :public test , public sports{
	float total;
	public:
		void disp(){
			total = m1 + m2 + sp;
			putroll();
			putmarks();
			putsp();
			cout << "Total Scores: "<<total;
			
				
		}
};


int main(){
	result obj;
	
	obj.getroll(56);
	obj.getmarks(78.9,99.7);
	obj.getsp(79.08);
	obj.disp();
	
	
	return 0;
	
	
}
