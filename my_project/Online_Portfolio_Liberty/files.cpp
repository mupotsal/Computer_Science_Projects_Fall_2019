#include <iostream>
using namespace std;

class Node {
private:
	int data; //data in the beginning node
	Node* next; //pointer to the next node

public:
	Node(int initdata) {
		data = initdata; //the initialized data is set as the head
		next = NULL; //the next node is set as NULL, as there is no next node yet.
	}

	int getData() { //function that return data of a given node.
		return data;
	}

	Node* getNext() {
		return next;
	}

	void setData(int newData) {
		data = newData;
	}

	void setNext(Node* newnext) {
		next = newnext;
	}
};

int main() {
	Node temp(4);

	return 0;
}
