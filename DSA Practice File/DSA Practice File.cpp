#include <iostream>
using namespace std;

void PointerToArray();

int main()
{
	//BasicPointer();

	PointerToArray();	
	
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

 void TwoDimensionalArray() {
 	int arr[3][4] = {
 		{1,2,3,4},
 	    {5,6,7,8},
 	    {9,10,11,12}
 	};
 }
