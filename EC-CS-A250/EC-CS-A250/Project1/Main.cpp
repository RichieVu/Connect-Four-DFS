/*
*	Pirates
*	Vu, Richie MW ----
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

	system("Pause");
	return 0;
}


