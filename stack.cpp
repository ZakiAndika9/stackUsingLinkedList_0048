#include <iostream>



using namespace std;


class Node
{
	public:
	int data;
	Node *next;

	Node()
	{
		next= NULL;
	}
};

//stack class
class Stack
{
	private:
	Node *top;

	public:
	Stack()
	{
		top=NULL;
	}


	int push(int value)
	{
		Node *newNode = new Node();
		newNode->data = value;
		newNode->next = top;
		top = newNode;
		cout << "Push value: " << value << endl;
		return value;
	}

	bool isEmpty()
	{
		return top == NULL;
	}

