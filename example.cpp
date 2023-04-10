#include<iostream>
using namespace std;

struct node {
	int data;
	node* next;
	node* prev;
};

node* head = nullptr;

// Function to create a new node
node* createnode(int data) {
	node* newnode = new node;
	newnode->data = data;
	newnode->next = nullptr;
	newnode->prev = nullptr;
	return newnode;
}

// Function to add a node to the end of the list
void add(int data) {
	node* newnode = createnode(data);
	if (head == nullptr) {
		head = newnode;
	}
	else {
		node* current = head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = newnode;
		newnode->prev = current;
	}
}

// Function to add a node to the beginning of the list
void at_beginning(int data) {
	node* newnode = createnode(data);
	if (head == nullptr) {
		head = newnode;
	}
	else {
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}
}

// Function to add a node to the end of the list
void at_end(int data) {
	node* newnode = createnode(data);
	if (head == nullptr) {
		head = newnode;
	}
	else {
		node* current = head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next = newnode;
		newnode->prev = current;
	}
}

// Function to insert a node at a specific position in the list
void insert(int data, int pos) {
	node* newnode = createnode(data);
	if (pos == 0) {
		if (head == nullptr) {
			head = newnode;
		}
		else {
			newnode->next = head;
			head->prev = newnode;
			head = newnode;
		}
	}
	else {
		node* current = head;
		for (int i = 1; i < pos && current != nullptr; i++) {
			current = current->next;
		}
		if (current == nullptr) {
			cout << "invalid node";
			delete newnode;
			return;
		}
		newnode->next = current->next;
		newnode->prev = current;
		if (current->next != nullptr) {
			current->next->prev = newnode;
		}
		current->next = newnode;
	}
}

int main() {
    // Adding nodes to the list
    add(10);
    add(20);
    add(30);
    add(40);

    // Insert a node at the beginning
    at_beginning(5);

    // Insert a node at the end
    at_end(50);

    // Insert a node at position 2 (0-indexed)
    insert(15, 2);

    // Print the list
    node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}
