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
