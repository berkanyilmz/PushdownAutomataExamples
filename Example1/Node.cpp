#include <iostream>

using namespace std;

class Node
{
public:
	char chr;
	Node* down;

	Node(char chr)
	{
		this->chr = chr;
		down = nullptr;
	}
};
