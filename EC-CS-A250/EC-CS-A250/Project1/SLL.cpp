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
		Node<T>* current = rhs.m_first->getNext();
		out << *(rhs.m_first);
		while (current != nullptr)
		{
			out << " " << current->getData();
			current = current->getNext();
		}
		return out;
	}

}

template<typename T>
SLL<T>& SLL<T>::operator=(const SLL<T>& otherList)
{
	if (&otherList != this)
	{
		Node<T>* currOther = otherList.m_first;
		if (currOther != nullptr)
		{
			Node<T>* curr = new Node<T>(*currOther);
			m_first = curr;
			while (currOther->getNext() != nullptr)
			{
				currOther = currOther->getNext();
				Node<T>* temp = new Node<T>(*currOther);
				curr->setNext(temp);
				curr = temp;
			}
			curr->setNext(nullptr);
		}
		else
		{
			m_first = nullptr;
			m_count = 0;
		}
	}
	else
	{
		cerr << "Attempted assignment to itself.";
	}
	return *this;

	/*
	SLL<T> temp(otherList);
	swap(temp.m_first, m_first);
	return *this;
	*/
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
			current = current->getNext();
		}
		return false;
	}
}

template<typename T>
void SLL<T>::destroyList()
{
	if (m_first != nullptr)
	{
		Node<T>* temp = m_first;
		while (temp != nullptr)
		{
			m_first = m_first->getNext();
			delete temp;
			temp = m_first;
		}
		m_count = 0;
	}
}

template<typename T>
SLL<T>::~SLL()
{
	destroyList();
}