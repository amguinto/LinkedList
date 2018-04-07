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
LinkedList::~LinkedList() {};

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
};

void LinkedList::DelNode(int data) {
	
	Node* temp = NULL;
	current = head;

	while (current != NULL && current->data != data) {
		current = current->next;
	}
	if (current == NULL) {
		cerr << data << " is not in the list." << endl;
	}
	else {
		cout << "Deleting " << data << " from the list..." << endl;
		temp = current;
		current = current->next;
		delete temp;
		cout << data << " was deleted from the list." << endl;
	}
};

void LinkedList::PrintTraversal() {
	int counter = 1;
	current = head;
	if (current == NULL) {
		cerr << "The list is empty." << endl;
		counter = 0;
	}
	else {
		while (current->data != NULL) {
			cout << current->data << " ";

			if (current->next != NULL) {
				current = current->next;
			}
			else {
				break;
			}
			counter++;
		}
		cout << endl;
		cout << "The number of elements inside the list is: " << counter << endl;
	}
};

