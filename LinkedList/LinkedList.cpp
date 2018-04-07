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
	current = NULL;
};

void LinkedList::AddNode(int data) {

	//Create node and set it up.
	Node* temp = new Node;
	temp->data = data;
	temp->next = NULL;

	if (head != NULL) {
		//Check through entire list, starting from head.
		current = head;

		while (current->next != NULL) {
			current = current->next;
		}
		current->next = temp;

		cout << "Successfully added " << temp->data << " to the list." << endl;
	}
	else {
		head = temp;
		cout << temp->data << " is the first element in the list." << endl;
	}

	temp->next = NULL;
};

void LinkedList::DelNode(int delData) {
	
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

LinkedList::~LinkedList() {};
