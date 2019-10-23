#include <iostream>
using namespace std;

int main(){
	int n , i;
	float *p , total = 0;
	cout << "Enter number of subjects: " << endl;
	cin >> n;
	p = new float[n];
	cout << "Enter Marks: " << endl;
	for(int i = 0; i < n; i++){
		cout << "Subject" << (i+1) << endl;
		cin >> p[i];
	}
	cout << endl;
	cout << "Marks: " << endl;
	for(int i = 0; i<n; i++){
		cout << "\nSubject " << (i+1) << " Marks: ";
		cout << *(p+i) << endl;
		total = total + *(p+i);
	}
	cout << endl;
	cout << "Total Marks: " << total;
	delete []p;
	return 0;
}
