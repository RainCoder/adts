#include "StackLL.h"
#include <string> 
#include <iostream>
using namespace std;


class Stack::Node 
{
	public:
	   string data = " ";
	   Node* link = nullptr;
	
	};

Stack::~Stack()
{
while(num_elements > 0)
  remove(1);
}

int Stack::size()
{
	return num_elements;
}

void Stack::push(string val)
{
	Node* newPtr = new Node{val};
	newPtr -> link = frontPtr;
	frontPtr = newPtr;
	
	num_elements++;
}

void Stack::pop()
{
	Node* delPtr;
	delPtr = frontPtr;
	frontPtr = frontPtr -> link;
	
	delete delPtr;
	num_elements--;
}

int Stack::top()
{
	return frontPtr -> data;
}

void Stack::clear()
{
	while(num_elements != 0)
	 remove(1);
}
