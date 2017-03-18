#include "StackL.h"
#include <iostream>
using namespace std;



int Stack::size()
{
  data.size();
}

void Stack::push(int val)
{
 k = 1;
data.insert(val,k);
}

void Stack::pop()
{
k = 1;
data.remove(k);
}

int Stack::top()
{
	data.display();
	
}

void Stack::clear()
{
data.clear();
}

