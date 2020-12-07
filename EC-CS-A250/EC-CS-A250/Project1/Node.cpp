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

using namespace std;

template<typename T>
ostream& operator<<(ostream& out, const Node<T>& node)
{
	out << node.getData();
	return out;
}

template<typename T>
void Node<T>::setData(T data)
{
	m_data = data;
}

template<typename T>
void Node<T>::setNext(Node<T>* next)
{
	m_next = next;
}