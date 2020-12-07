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

#ifndef NODE_H
#define NODE_H

#include <iostream>

template<typename T>
class Node
{
	template<typename T>
	friend std::ostream& operator<<(std::ostream& out, const Node<T>& node);

public:
	Node() : m_data{ 0 }, m_next{ nullptr } {}
	Node(T data, Node<T>* next) : m_data{ data }, m_next{ next } {}

	void setData(T);
	void setNext(Node<T>*);
	T getData() const { return m_data; }
	Node<T>* getNext() const { return m_next; }

private:
	T m_data;
	Node<T>* m_next;
};

#endif
