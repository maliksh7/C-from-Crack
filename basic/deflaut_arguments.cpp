#include <iostream>
using namespace std;

int add(int x , int y , int z =8 , int s =10){
	return (x+y+z+s);
}

int main(){
	cout<<add(10,20);
	return 0;
}
