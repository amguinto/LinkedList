/*
Andy Matthew Guinto
*/

#include "LinkedList.h"
#include <iostream>
#include <cstdlib>
#include <vector>
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
	Node* reAttach = head;
	current = head;

	//Keep going until we reach the end of the list or we find the data.
	while (current != NULL && current->data != data) {
		//Keep one step behind for reattachment.
		reAttach = current;
		current = current->next;
	}
	//We did not find the data.
	if (current == NULL) {
		cerr << data << " was not in the list." << endl;
		delete temp;
	}
	
	//We found the data.
	else {
		temp = current;
		current = current->next;
		if (data == head->data) {
			head = head->next;
			temp = NULL;
		}
		//Reattach.
		delete temp;
		reAttach->next = current;
		
		cout << data << " was removed from the list." << endl;
	}
};
//return a vector maybe?
void LinkedList::PrintTraversal() {

	cout << "Printing Traversal..." << endl;
	
	current = head;
	if (current == NULL) {
		cerr << "The list is empty." << endl;
		counter = 0;
	}
	else {
		counter = 1;
		while (current->data != NULL) {
			cout << current->data << " ";

			if (current->next != NULL) {
				current = current->next;
			}
			else {
				break;
			}
			++counter;
		}
		cout << endl;
		cout << "The number of elements inside the list is: " << counter << endl;
	}
};

void LinkedList::FindMiddle() {

	Node* dataPtr = head;
	Node* speedPtr = head;

	if (head != NULL) {

		//Case for odd numbers.
		if (counter % 2 == 1) {

			//fastPtr going double the speed.
			while (speedPtr->next != NULL) {
				speedPtr = speedPtr->next->next;
				dataPtr = dataPtr->next;
			}
			cout << dataPtr->data << " is the middle element." << endl;
		}//Case for even numbers.
		else {
			while (speedPtr->next->next != NULL) {
				speedPtr = speedPtr->next->next;
				dataPtr = dataPtr->next;
			}
			cout << dataPtr->data << " and " << dataPtr->next->data << " are the middle elements." << endl;
		}
	}
	else {
		cerr << "The tree is empty." << endl;
	}
};

void LinkedList::RemoveDuplicates() {

	PrintTraversal();
	vector<int> dups{};

	Node* temp = NULL;
	Node* reAttach = head;
	current = head;
	while (current != NULL) {
		//Find consecutive duplicates.
		if (current->data != current->next->data) {
			current = current->next;
		}
		else {			
			dups.push_back(current->data);
		}

	}
}

