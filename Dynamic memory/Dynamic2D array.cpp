#include <iostream>
using namespace std;

void fill(int **p , int rSize, int cSize){
	for(int i = 0; i < rSize; i++){
		cout << "Enter "<<rSize<<" Number of rows.\n Row no. " << i << endl;
		for(int j = 0; j < cSize; j++){
			cin >> p[i][j];
		} 
	}
}

void print(int **p , int rSize , int cSize){
	for(int i = 0; i<rSize; i++){
		for(int j = 0; j<cSize; j++){
			cout << p[i][j];
		}
	}
}

int main(){
	int **p;
	int rsize;
	int csize;
	cout << "Enter Size of Rows and Cols: " << endl;
	cin >> rsize >> csize;
	
	p = new int *[rsize];
	for(int i = 0; i<rsize; i++){
		p[i] = new int[csize];
	}
	cout << endl;
	fill(p,rsize,csize);
	print(p,rsize,csize);
	delete p;
}
