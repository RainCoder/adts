#include "StackL.h"
#include <iostream>
using namespace std;



int Stack::size()
{
  data.size();
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
	data.display();
	
}

void Stack::clear()
{
data.clear();
}

