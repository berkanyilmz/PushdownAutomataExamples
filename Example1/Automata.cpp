#include <iostream>
#include "Stack.cpp"

using namespace std;

Stack* stack = new Stack();

bool automata(string data, int index)
{
	if (index == data.length())
	{
		if (stack->head->chr == 'z')
		{
			stack->pop();
			return true;
		}
		return false;
	}
	else if (data[index] == '0')
	{
		stack->push(new Node('0'));
		return automata(data, index + 1);
	}
	else if (stack->head->chr == '0' &&
			data[index] == '1')
	{
		stack->pop();
		return automata(data, index + 1);
	}
	return false;
}

int main()
{
	stack->push(new Node('z'));
	string data;
	cout << "Your entry : " << endl;
	cin >> data;
	bool flag = automata(data, 0);
	if (flag == true)
	{
		cout << "Positive !" << endl;
	}
	else
	{
		cout << "Negative !" << endl;
	}
}
