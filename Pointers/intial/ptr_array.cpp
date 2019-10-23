#include <iostream>
using namespace std;

int main(){
	int arr[5] = {1,2,3,4,5};
	int *p,i;

	cout << "Enter Elements for Array...."<<endl;
	for (int i = 0;  i<5;  i++){
		
		cin >> arr[i];
	}
	p = arr;
	cout << "Elements are: " << endl;
	int sum = 0;
	for(int i = 0;  i<5;  i++){
		cout << *p << endl;
		sum = sum + *p;
		p++;
	}
	cout << "Sum is: " << sum << endl;
	return 0;
}
