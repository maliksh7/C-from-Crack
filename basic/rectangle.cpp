//****** // Given the length and width of a rectangle, this C++ program // computes and outputs the perimeter and area of the rectangle.//
#include <iostream>
using namespace std;

int main(){
	int length = 4;
	int width = 5;
	int perimeter;
	int area;
	
	cout<<"length = "<<length<<endl;
	cout<<"Width = "<<width<<endl;
	perimeter = 2 * ( length + width );
	area = length * width;
	
	cout<<"Perimeter of Rectangle is = "<<perimeter<<endl;
	cout<<"Width of Rectangle is = "<<area<<endl;
	
	return 0;
}
