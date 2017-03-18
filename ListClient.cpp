#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

int lim, rm;
char ans;

cout << "Please enter list size (an integer)";
cin >> lim;


for ( int i= 1; i >= lim ; i++)
{
	if(i ==1)
	{
		L1.insert(i+1, i);
		L2.insert(i+2, i);
	}
	
	L1.insert(i+1, i-1);
	L2.insert(i+2, i-1);
}

cout << "List 1: ";
L1.display();
cout << "size: " << L1.size();

cout << "List 2: ";
L2.display();
cout << "size: " << L2.size();

cout << "Do you wish to remove an element in List 1? (y/n)";
cin >> ans;

while( ans == 'y' && L1.size() != 0){

cout << "Please enter the position of the element you wish to remove in List 1(an integer)";
cin >> rm;

L1.remove(rm);

cout << "List 1: ";
L1.display();
cout << "size: " << L1.size();

cout << "Do you wish to remove another element in List 1? (y/n)";
cin >> ans;
}

while( ans == 'y' && L2.size() != 0){

cout << "Please enter the position of the element you wish to remove in List 2(an integer)";
cin >> rm;

L1.remove(rm);

cout << "List 1: ";
L2.display();
cout << "size: " << L2.size();

cout << "Do you wish to remove another element in List 2? (y/n)";
cin >> ans;
}


cout << "The first element of List 1 is" <<  L1.getAt(1);
cout << "The second element of List 1 is" <<  L1.getAt(2);

}
