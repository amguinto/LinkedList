/*
Andy Matthew Guinto
*/

#include "LinkedList.h"
#include <iostream>
#include <cstdlib>
using namespace std;

//Constructors followed by Destructors
LinkedList::LinkedList() {
	
	head = NULL;
	tail = NULL;
};
LinkedList::~LinkedList() {};

AddNode::AddNode() {};
AddNode::~AddNode() {};

DeleteNode::DeleteNode() {};
DeleteNode::~DeleteNode() {};

void AddNode::Add(int data) {

	//Create node.
	Node* n = new Node;
	n->data = data;
	n->next = NULL;

	if (head != NULL) {
		//Check through entire list, starting from head.
		current = head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = n;
		cout << "Successfully added " << n << " to the list." << endl;
	}
	else {
		current = head;
		current = tail;
		cout << current << " is the first element in the list." << endl;
	}
};

void DeleteNode::Delete(int delData) {
	
	Node* n = new Node;
	n = NULL;
	current = head;

	if (head != NULL) {
		//Check if every field contains the delData value, including head.
		while (current != NULL) {
			if (current->data != delData) {
				current = current->next;
			}
			//If we find it.
			else if(current->data = delData) {
				n = current;
				delete n;
			}
		}
	}
	else {
		cout << delData << " was not in the list." << endl;
	}
};
