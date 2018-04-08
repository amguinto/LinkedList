/*
Andy Matthew Guinto
*/

#include "LinkedList.h"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {

	/*vector<int> list = { 1, 5, 2, 8, 3 };*/
	LinkedList ll;

	ll.AddNode(1);
	ll.AddNode(2);
	ll.AddNode(3);
	ll.AddNode(4);
	ll.AddNode(5);
	ll.AddNode(6);
	ll.PrintTraversal();
	
	ll.FindMiddle();

	cout << endl;

	return 0;
}