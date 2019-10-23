#include <iostream>
#include <iomanip>

using namespace std;

void fill(int **p, int rowSize, int columnSize);
void print(int **p, int rowSize, int columnSize);

int main(){
int rows;
int columns;

cout<<"Enter number of rows and columns respectively.."<<endl;
cin>>rows>>columns;
cout << endl;

int **ptr;
ptr = new int*[rows];
for(int row =0; row < rows; row++)
	{
		ptr[row] = new int[columns];
	}
fill(ptr, rows, columns);
print(ptr, rows, columns);

return 0;
}

void fill(int **p, int rowSize, int columnSize){
	for(int row = 0; row <rowSize; row++){
		for(int col = 0; col < columnSize; col++)
			cin >> p[row][col];
		cout << endl;	
	}
}

void print(int **p, int rowSize, int columnSize){
	for(int row = 0; row < rowSize; row++){
		for(int col = 0; col < columnSize; col++)
			cout<< setw(5) << p[row][col];
		cout << endl;	
	}
}
