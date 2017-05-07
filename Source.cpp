#include "ArrayList.h"
/*
Morgan Knowles
12/7/2016
Microsoft Visual Studio
You are to code the ArrayList<T> class described in the UML diagram below:

ArrayList<T>
- T* data
- int howmany
+ ArrayList<T> ()   //creates ArrayList with size of 10
+ ArrayList<T>(int cap) // creates ArrayList with capacity of cap
+ void add(T value)    // adds new value to end of this list
+ void ensureCapacity(int cap)  //assures that there is room for ‘cap’ items in this ArrayList, resizing if necessary
+ int size()   //returns the number of values in this list

+ void set(int index, T value) // replaces element at index with new value
+ T get(int index)  //returns value at index

// set and get functions throw invalid_argument exceptions if the indexif outside the range (index < 0, || index >= size())

Hint:  add function should call ensurecapacity  before adding new item to this ArrayList

Main program:

Main program should create an ArrayList<int> object and demonstrate that all functions work correctly.  Add and set functions can be verified by printing out all elements in the ArrayList, plus it’s capacity.

*/

int main() {
	char userOpt = '?';
	cout << "Enter m for menu or q to quit" << endl;

	ArrayList <int>a(5);
	ArrayList <int>b(10);
	ArrayList<int> temp(7);

	cout << "a:" << endl;
	for (int i = 0; i < 10; i++) {
		a.add(i);
		cout << a.get(i) << " " ;
	}
	cout<< endl << "__________________________________________" << endl;

	for (int i = 10; i < 20; i++) {
		b.add(i);
		
}
	for (int i = 0; i < 10; i++) {
		cout << b.get(i) << " ";
	}
	cout << endl << "__________________________________________" << endl;
	cout << "add a + b:" << endl;
	a + b;


	for (int i = 0; i <20; i++) {
	cout << temp.get(i) << " ";
	}
	cout << endl << "__________________________________________" << endl;

	for (int i = 0; i <20; i++) {
		cout << a.get(i) << " ";
	}
	cout << endl << "__________________________________________" << endl;



	


	do {
		cout << endl<< "__________________________________________" << endl;
		cin >> userOpt;
		switch (userOpt) {
		case 'a':
			break;
		case 'b':
			break;
		case 'c':
			break;
		case 'd':
			break;
		case 'e':
			break;
		case 'f':
			break;
		case 'g':
			break;
		case 'm':
			cout << "MENU" << endl;
			cout << "Add a name to Joe's list (a)" << endl;
			cout << "Add a name to Sallys's list (b)" << endl;
			cout << "View all names in Joe's list (c)" << endl;
			cout << "View all names in Sally's list (d)" << endl;
			cout << "View all names that are only in Joe's list (but not Sally's) (e)" << endl;
			cout << "View all names that are only in Sally's list (but not Joe's) (f)" << endl;
			cout << "View all names that are contained in both lists (g)" << endl;
			cout << "Replace Joe's list with Sally's (h)" << endl;
			cout << "View menu (m)" << endl;
			cout << "Quit (q)" << endl;
			break;
		default:
			break;

		}
		
	} while (userOpt != 'q');

	ArrayList<int> list1(3);

	for (int i = 0; i < 7; i++) {
		list1.add(i);
	}
	cout << "Items in list1: " << endl;
	for (int i = 0; i < 7; i++) {
		cout << list1.get(i) << endl;
	}

	cout << endl << "Try to set something out of range:" << endl;
	try {
		list1.set(2234, 100);
	}
	catch(invalid_argument ia){
		cout << ia.what() << endl;
	}
	
	cout << "Try to get something out of range:" << endl;
	try {
		cout << list1.get(342) << endl;
	}
	catch (invalid_argument ia) {
		cout << ia.what() << endl;
	}	
}