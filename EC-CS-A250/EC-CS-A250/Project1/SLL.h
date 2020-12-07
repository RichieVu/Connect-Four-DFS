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
	SLL() : m_first{ nullptr }, m_count{ 0 } {}
	SLL(Node<T>* first, int count) : m_first{ first }, m_count{ count } {}
	SLL(const SLL& otherList) {}

	SLL& operator=(const SLL& otherList);
	void push(T);
	T pop();
	bool find(const T&) const;

	~SLL();

private:
	Node<T>* m_first;
	int m_count;
};

#endif