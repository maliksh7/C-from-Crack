#include <iostream>
#include <iomanip>
using namespace std;

void fill(int **p, int rowSize, int columnSize);
void print(int **p, int rowSize, int columnSize);

int main(){
	
	int **p;
	
	int rsize;
	int csize;
	
	cout << "Line 4: Enter the number of rows "
		 << "and columns: ";
	cin >> rsize >> csize;
	cout << endl;
	
	p = new int* [rsize];
	
	for (int i = 0; i < rsize; i++)
		p[i] = new int[csize];
	fill(p, rsize, csize);
	
	cout << "Linr 11: Board:" << endl;
	cout << endl;
	print(p, rsize, csize) ;
	cout << endl;	 
	return 0;
}

void fill(int **p, int rSize, int cSize){
	for(int i = 0; i < rSize; i++){
		cout << "Enter " << cSize << " number(s) for row "
		     << "number " << i << ": ";
		for(int j = 0; j < cSize; j++){
			cin >> p[i][j];
			
		}     
	}
}


void print(int **p, int rSize, int cSize){
	for(int i = 0; i < rSize; i++){
		for(int j = 0; j < cSize; j++){
			cout << endl;
			cout << setw(10) << p[i][j];
			
		}
	}
	
}
