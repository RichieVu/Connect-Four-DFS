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
#include "SLL.h"

using namespace std;

template<typename T>
ostream& operator<<(ostream& out, const SLL<T>& rhs)
{
	if (rhs.m_first == nullptr)
	{
		cerr << "List is empty.\n";
		return out;
	}
	else
	{
		Node<T>* current = rhs.m_first;
		while (current != nullptr)
		{
			out << current->getData();
			current = current->getNext();
		}
		return out;
	}

}

template<typename T>
SLL<T>& SLL<T>::operator=(const SLL<T>& otherList)
{
	m_first = otherList.m_first;
	m_count = otherList.m_count;
}

template<typename T>
void SLL<T>::push(T e)
{
	m_first = new Node<T>(e, m_first);
	++m_count;
}

template<typename T>
T SLL<T>::pop()
{
	Node<T>* front = m_first;
	m_first = m_first->getNext();
	--m_count;
	T data = front->getData();
	delete front;
	return data;
}

template<typename T>
bool SLL<T>::find(const T& key) const
{
	if (m_first == nullptr)
	{
		cerr << "List is empty.\n";
	}
	else
	{
		Node<T>* current = m_first;
		while (current != nullptr)
		{
			if (current->getData() == key)
			{
				return true;
			}
		}
		return false;
	}
}

template<typename T>
SLL<T>::~SLL()
{
	if (m_first != nullptr)
	{
		Node<T>* temp = m_first;
		while (m_first != nullptr)
		{
			m_first = m_first->getNext();
			delete temp;
			temp = m_first;
		}
		m_count = 0;
	}
}