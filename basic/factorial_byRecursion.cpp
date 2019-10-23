#include <iostream>
using namespace std;

long long fac(int);

int main(){
	int n;
	cout<<"Enter a Number: "<<endl;
	cin>>n;
	
	cout<<"Factoriral of "<<n<<" is : "<<fac(n);
	return 0;	
}

long long fac(int x){
	if(x == 0){
		return 1;
	}
	return (x * fac(x - 1));
}
