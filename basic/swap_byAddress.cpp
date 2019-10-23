#include <iostream>
using namespace std;

void swap(int * , int *);

int main(){
	int a , b;
	cout<<"Enter Values of a&b ";
	cin>>a>>b;
	cout<<"Before swapping: "<<"\n"<<a<<"\n"<<b<<endl;
	swap(&a,&b);
	cout<<"After swapping: "<<"\n"<<a<<"\n"<<b;
	
	return 0;
}

void swap(int *x , int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
