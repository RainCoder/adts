//With a (raw) linked-list 

#ifndef STACK_H
#define STACK_H

class Stack
{
private:

   class Node;

   Node* frontPtr = nullptr;
   int num_elements = 0;

public:

    // No default c'tor needs to be declared 
    // We initialized the attributes above

   ~Stack(); //d'tor

   int size();

   void push(int);

   void pop();

   int top();

   void clear();

};

#endif
