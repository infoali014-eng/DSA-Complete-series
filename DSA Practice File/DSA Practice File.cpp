#include <iostream>
using namespace std;

class Pointer {
public:
	void BasicPointer() {
		cout << "Display address of variable using Pointer: " << endl;
		int age = 20;
		int* p = &age;
		cout << &p << endl;
	}

	void PointerToArray() {
		// Displaying array elements using pointers
		int arr[5] = { 1,2,3,4,5 };
		int* ptr = arr;

		cout << "Displaying first element of Array" << endl;
		cout << *ptr << endl; //Display element
		cout << ptr << endl; //Display address

		cout << "Displaying the whole array using Pointer: " << endl;
		for (int i = 0; i < 5; i++) {
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

		// Use a pointer-to-array to access elements: int (*ptr)[4] = arr;
		int (*ptr)[4] = arr; // ptr points to arrays of 4 ints

		cout << "Print 2D array using pointer-to-row (ptr[i][j]):" << endl;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				cout << ptr[i][j] << "  ";
			}
			cout << endl;
		}

		// Example access
		cout << ptr[1][2] << endl;
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

		// Use pointer-to-2D-array: int (*ptr)[3][4] = arr;
		int (*ptr)[3][4] = arr; // ptr points to 3x4 blocks

		cout << "Print 3D array using pointer-to-block (ptr[i][j][k]):" << endl;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {
				for (int k = 0; k < 4; k++) {
					cout << ptr[i][j][k] << "   ";
				}
				cout << endl;
			}
			cout << endl;
		}

		cout << ptr[1][2][1] << endl;
	}
};
struct node {
	int data;
	node* next;
};
class SingleLinkedList {
	public:
		node* head;
		SingleLinkedList() {
			head = NULL;
		}
	void InsertAtStart(int value){
		node* newNode = new node;
		newNode->data = value;
		newNode->next = head;
		head = newNode;
	}
	void InsertAtEnd(int value) {

		node* newnode = new node;//Creates node

		newnode->data = value;//Assigns value
		newnode->next = NULL;//make next of last node NULL

		//set head if node is created ones
		if (head == NULL) {
			head = newnode;
			return;
		}

		node* temp = head;

		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newnode;//join next node to the previous
		
	}
	void InsertAtSpecificPosition(int value, int pos) {
		node* newnode = new node;
		if (pos < 1) {
			cout << "Invalid Position" << endl;
			return;
		}
		if (pos == 1) {
			InsertAtStart(value);
			return;
		}
		node* temp = head;
		int i = 1;
		while (i < pos - 1 && temp->next != NULL) {
			temp = temp->next;
			i++;
		}
		newnode->data = value;
		newnode->next = temp->next;
		temp->next = newnode;
	}
	void Display() {
		node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
};

class Recursion {
public:

};

int main()
{
	Pointer ptr;

	SingleLinkedList l1;
	l1.InsertAtEnd(10);
	l1.InsertAtEnd(20);
	l1.InsertAtEnd(30);
	l1.InsertAtSpecificPosition(25, 4);
	l1.Display();

	// Call methods via object
	//ptr.BasicPointer();
	//ptr.PointerToArray();
	//ptr.PointersIn2DArray();
	//ptr.PointersIn3DArrays();

	return 0;
}

//UNION
#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

bool Contains(node* head, int value) {
	node* temp = head;

	while (temp != NULL) {
		if (temp->data == value) {
			return true;
		}

		temp = temp->next;
	}

	return false;
}

void Append(node*& head, node*& tail, int value) {
	node* newnode = new node;
	newnode->data = value;
	newnode->next = NULL;

	if (head == NULL) {
		head = newnode;
		tail = newnode;
	}
	else {
		tail->next = newnode;
		tail = newnode;
	}
}