# Doubly-Linked-List-Operations
This C++ code demonstrates the implementation of a doubly linked list. It provides functions to add nodes at the beginning or end of the list, and to insert nodes at specific positions. The list structure contains an integer data value and pointers to the next and previous nodes.
Doubly Linked List Implementation in C++

# Structure

The list structure is defined as follows:

struct node {

	int data;
  
	node* next;
  
	node* prev;
  
};


A node structure contains an integer data, a pointer next to the next node, and a pointer prev to the previous node in the list.

# Functions
**createnode(int data)**

This function creates a new node with the specified data value. The next and prev pointers are initialized to nullptr. It returns a pointer to the newly created node.

**add(int data)**

This function adds a new node with the specified data value to the end of the list.

**at_beginning(int data)**

This function adds a new node with the specified data value to the beginning of the list.

**at_end(int data)**

This function adds a new node with the specified data value to the end of the list. It is functionally equivalent to the add function.

**insert(int data, int pos)**

This function inserts a new node with the specified data value at the specified pos position (0-indexed). If the position is 0, the new node is added to the beginning of the list. If the position is greater than the length of the list, an error message is displayed, and the function returns without making any changes to the list.

# Example Usage

In the main function, the provided code demonstrates the usage of the functions by adding and inserting nodes to the list, then printing the list:

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


The output of the example will be:

5 10 15 20 30 40 50
