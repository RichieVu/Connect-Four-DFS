﻿/*
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
	cout << list << endl;

	cout << list.pop() << endl;
	cout << list << endl;

	cout << list.find(1) << list.find(2) << list.find(3) << list.find(4) << endl;

	SLL<int> copy;
	copy = list;
	cout << copy << endl;
	copy.destroyList();

	SLL<int> copy2(list);
	copy2.push(6);
	cout << copy2 << endl;

	SLL<int> copy2(copy);
	cout << copy2 << endl;

	SLL<string> stringList;
	stringList.push("C++");
	stringList.push("Java");
	stringList.push("Python");
	cout << stringList << endl;

	system("Pause");
	return 0;
}


