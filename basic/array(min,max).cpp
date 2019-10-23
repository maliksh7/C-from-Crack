#include <iostream>
using namespace std;

int main(){
	
	double array[5] = {2,4,1234,3,1};
	double max = array[0];
	for(int i = 1; i<5; i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	cout << max << endl;
	double array1[5] = {2,4,8,234,1};
	double min = array1[0];
	for(int i = 1; i<5; i++){
		if(array1[i] < min){
			min = array1[i];
		}
	}
	cout << min << endl;
}

