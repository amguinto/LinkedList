/*
Andy Matthew Guinto
*/

class LinkedList {

protected:
	//What all Nodes have.
	struct Node {
		int data;
		Node* next;
	};

	Node* head;
	Node* tail;
	Node* current;
public:
	LinkedList();
	~LinkedList();
};

class AddNode : LinkedList {
public:
	//Add Node to List.
	void Add(int data);

	AddNode();
	~AddNode();
};

class DeleteNode : LinkedList {
public:
	//Delete Node from the list.
	void Delete(int data);

	DeleteNode();
	~DeleteNode();
};