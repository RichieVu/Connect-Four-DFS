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

#ifndef SLL_H
#define SLL_H

#include "Node.h"

#include <iostream>

template<typename T>
class SLL
{
	template<typename T>
	friend std::ostream& operator<<(std::ostream& out, const SLL<T>& rhs);

public:
	// Default constructor
	SLL() : m_first{ nullptr }, m_count{ 0 } {}
	// Overloaded constructor
	SLL(Node<T>* first, int count) : m_first{ first }, m_count{ count } {}
	// Copy
	SLL(const SLL& otherList) { *this = otherList; } // using the overloaded assignment operator

	// Overloaded assignment operator
	SLL& operator=(const SLL& otherList);
	void push(T);
	T pop();
	bool find(const T&) const;

	void destroyList();
	~SLL();

private:
	Node<T>* m_first;
	int m_count;
};

#endif