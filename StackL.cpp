#include "StackL.h"
#include <iostream>
using namespace std;



int Stack::size()
{
  return data.size();
}

void Stack::push(int val)
{
 int k = 1;
data.insert(val,k);

}

void Stack::pop()
{
int k = 1;
data.remove(k);
}

int Stack::top()
{
	int k = size();
	return data.getAt(k);
	
}

void Stack::clear()
{
data.clear();
}

