#include <iostream>
using namespace std;

void PointerToArray();
void BasicPointer();
void PointersIn2DArray();
void PointersIn3DArrays();

int main()
{
	//BasicPointer();

	//PointerToArray();	

	PointersIn2DArray();

	PointersIn3DArrays();
	
	return 0;
}
void BasicPointer() {
	cout << "Display address of variable using Pointer: " << endl;
	int age = 20;
	int* p = &age;
	cout << &p << endl; 
}

void PointerToArray() {

	//Displaying array elements using pointers 

	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;

	cout << "Displaying first element of Array" << endl;
	cout << *ptr << endl; //Display element
	cout << ptr << endl; //Display address

	cout << "Displaying the whole array using Pointer: " << endl;
	for (int i = 0; i < 5; i++) 
	{
		cout << *(ptr + i) << " ";
	}
	cout << endl << endl;

	cout << "Proof that the name of the arry is Pointer to its first element:" << endl << endl;
	cout << "arr gives: " << arr << " (address of first element)" << endl;
	cout << "&arr gives: " << &arr << " (address of whole array)" << endl;
	cout << "arr+1 jumps: " << arr + 1 << endl;
	cout << "&arr+1 jumps: " << &arr + 1 << " (jumps whole array size)" << endl;
}

 void PointersIn2DArray() {
 	int arr[3][4] = {
 		{1,2,3,4},
 	    {5,6,7,8},
 	    {9,10,11,12}
 	};

	//Printing the 2d array by loop method

	cout << "Simply prints the whole 2d array using for loop" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << *(*(arr + i) + j) << "  ";
		}
		cout << endl;
	}

	cout << *(*(arr + 1) + 2) << endl;

 }
 void PointersIn3DArrays() {

	 int arr[2][3][4] = 
	 {
		{
		 {1, 2, 3, 4},
		 {5, 6, 7, 8},
		 {9, 10, 11, 12}
		 },
		{
		 {13, 14, 15, 16},
		 {17, 18, 19, 20},
		 {21, 22, 23, 24}
		}
	 };

	 for (int i = 0; i < 2; i++) {
		 for (int j = 0; j < 3; j++) {
			 for (int k = 0; k < 4; k++) {
				 cout << *(*(*(arr + i) + j) + k) << "   ";
			 }
			 cout << endl;
		 }
		 cout << endl;
	 }
	 cout << *(*(*(arr + 1) + 2) + 1) << endl;
 }