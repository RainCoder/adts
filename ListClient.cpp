#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

int lim, rm;
char ans;

cout << "Please enter list size (an integer) ";
cin >> lim;


for ( int i= 1; i <= lim ; i++)
{
	if(i == 1)
	{
		L1.insert(i+1, i);
		L2.insert(i+2, i);
	}
	else
	{
		L1.insert(i+1, i-1);
		L2.insert(i+2, i-1);
	}
}

cout << "List 1: ";
L1.display();
cout << "\n";
cout << "size: " << L1.size() << "\n";

cout << "List 2: ";
L2.display();
cout << "\n";
cout << "size: " << L2.size() << "\n";

cout << "Do you wish to remove an element in List 1? (y/n)";
cin >> ans;

while( ans == 'y' && L1.size() != 0){
cout << "\n";
cout << "Please enter the position of the element you wish to remove in List 1(an integer)";
cin >> rm;

L1.remove(rm);

cout << "\n";
cout << "List 1: ";
L1.display();
cout << "\n";
cout << "size: " << L1.size() << "\n";

cout << "Do you wish to remove another element in List 1? (y/n)";
cin >> ans;
}

cout << "Do you wish to remove an element in List 2? (y/n)";
cin >> ans;

while( ans == 'y' && L2.size() != 0){
cout << "\n";
cout << "Please enter the position of the element you wish to remove in List 2(an integer)";
cin >> rm;

L2.remove(rm);
cout << "\n";

cout << "List 2: ";
L2.display();
cout << "\n";
cout << "size: " << L2.size() << "\n";

cout << "Do you wish to remove another element in List 2? (y/n)";
cin >> ans;
}


cout << "The first element of List 1 is " <<  L1.getAt(1) << "\n";
cout << "The second element of List 2 is " <<  L2.getAt(2) << "\n";

}
