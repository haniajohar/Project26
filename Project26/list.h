#pragma once
#include"node.h"
class list
{
private:
	node* head = new node;
public:
	list();
	// Checks if the list is empty or not
	bool emptyList();
	// Inserts a new node with value ‘newV’ after node with 
	//value ‘oldV’in the list

	void insert_after(int oldV, int newV);
	// Inserts a new node at the start of the list
	void insert_begin(int value);
	// Inserts a new node at the end of the list
	void insert_end(int value);
	// Deletes a node of value ‘val’ from the list
	void delete_Node(int val);
	// Deletes a node from the beginning of the list
	void delete_begin();
	// Deletes a node from the end of the list
	void delete_end();
	// Displays the values stored in the list
	void traverse();
};
