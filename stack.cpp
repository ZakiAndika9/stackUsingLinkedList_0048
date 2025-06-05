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


	void pop()
	{
		if (isEmpty())
		{
			cout << "Stack is empty." << endl;
			return;
		}
		cout << "Popped value: " << top->data << endl;
		top = top->next;
	}


	void peek()
	{
		if (isEmpty())
		{
			cout << "List is empty." << endl;
		}
		else
		{
			Node *current = top;
			while (current != NULL)
			{
				cout << current->data << " " << endl;
				current = current->next;
			}
			cout << endl;
		}
	}
};

int main()
{
	Stack Stack;

	int choice = 0;
	int value;

	while (choice !=4)
	{
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Peek\n";
		cout << "4. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
			case 1:
			cout << "Enter the value to push: ";
			cin >> value;
			Stack.push(value);
			break;
			case 2:
			Stack.pop();
			break;
			case 3:
			Stack.peek();
			break;

			case 4:
			cout << "Exiting program." << endl;
			break;
			default:
			cout << "Invalid choice. Try again." << endl;
			break;
		}

		cout << endl;
	}

	return 0;
}