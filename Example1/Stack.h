#pragma once
#include "Node.cpp"
#include <iostream>

using namespace std;


class Stack
{
public:
	Node* head;

	Stack()
	{
		this->head = nullptr;
	}

	bool is_empty()
	{
		return head == nullptr;
	}

	void push(Node* node)
	{
		if (is_empty())
			head = node;
		else {
			node->down = head;
			head = node;
		}
	}

	Node* pop()
	{
		if (is_empty())
		{
			cout << "Stack is empty" << endl;
		}
		else
		{
			Node* deleted = head;
			head = head->down;
			return deleted;
		}
	}
};

