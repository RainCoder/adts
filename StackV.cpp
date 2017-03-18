#include "StackV.h"
#include <iostream>
using namespace std;



int Stack::size()
{
  data.size();
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
	return data.[size()-1];
	
}

void Stack::clear()
{
	while(data.size() != 0)
	 pop();
}


