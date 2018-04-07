/*
Andy Matthew Guinto
*/

class LinkedList {

protected:
	//What all Nodes have.
	struct Node {
		int data;
		Node* next;
		//Node* prev;
	};

	Node* head;
	Node* tail;
	Node* current;
public:
	LinkedList();
	~LinkedList();

	void AddNode(int data);
	void DelNode(int data);
};