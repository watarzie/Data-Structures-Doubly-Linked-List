#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

template <typename Object>
class Node {
public:
	Object data;
	Node<Object>* next;  //sonraki node
	Node<Object>* prev;  //önceki node

	Node(const Object& data = Object(), Node<Object>* next = NULL, Node<Object>* prev = NULL)
	 {
		this->data = data;
		this->next = next;
		this->prev = prev;
	}
};
#endif