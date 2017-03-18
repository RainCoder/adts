#include "StackV.h"
#include <iostream>
using namespace std;



int Stack::size()
{
  return data.size();
}

void Stack::push(int val)
{
	
 data.push_back(val);
 
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	int k = size()-1;
	return data[k];
	
}

void Stack::clear()
{
	while(data.size() != 0)
	 pop();
}


