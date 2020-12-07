/*
*	Pirates
*	Vu, Richie MW 2:20
*	Carje, Vincent MW 11am
*
*	December 6, 2020
*
*	CS A250
*	EC
*/
#include "Node.h"
#include "Node.cpp"
#include "SLL.h"
#include "SLL.cpp"

#include <iostream>

using namespace std;

int main()
{
	SLL<int> list;
	list.push(1);
	list.push(2);
	list.push(3);
	cout << "Intial List\n";
	cout << list << endl;

	cout << "Element to Remove" << list.pop() << endl << endl;

	cout << "Removed Element List" << list << endl << endl;

	cout << list.find(1) << list.find(2) << list.find(3) << list.find(4) << endl << endl;


	cout << "Create Copy\n";
	SLL<int> copy;
	copy = list; // Overloaded assignment operator test
	cout << copy << endl << endl;


	cout << "Copy of Copy\n";
	SLL<int> copy2(copy); // Copy constructor test
	cout << copy2 << endl << endl;

	cout << "Printing Deleted List\n";
	copy.destroyList();
	cout << copy << endl;

	cout << "List of Strings\n";
	SLL<string> stringList;
	stringList.push("C++");
	stringList.push("Java");
	stringList.push("Python");
	cout << stringList << endl;

	system("Pause");
	return 0;
}


