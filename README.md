# Circular Singly Linked List Implementation in C++

This project implements a **Circular Singly Linked List** in C++ using basic operations such as insertion, deletion, and traversal. In a circular linked list, the last node points back to the first node, creating a circular structure. This data structure is useful in scenarios like round-robin scheduling, buffering, and real-time systems where circular traversal is required.

## Project Structure

The project contains the following files:

- `list.h`: Header file containing the definition of the `list` class.
- `node.h`: Header file containing the definition of the `node` class.
- `list.cpp`: Implementation file where all the linked list functions are defined.
- `main.cpp`: The main file where the linked list operations are tested (not provided in this example).

## Features

The **list** class provides several methods to manipulate the circular linked list:

### Constructor
- **`list()`**: Initializes the head of the list and sets up the circular link. Initially, the list is empty, and `head->next` points back to `head`.

### Public Methods

- **`bool emptyList()`**: Checks if the list is empty by verifying whether the head points to itself.

- **`void insert_after(int oldV, int newV)`**: Inserts a new node with value `newV` after a node with value `oldV`. If `oldV` is not found, it prints an error message.

- **`void insert_begin(int value)`**: Inserts a new node with value `value` at the beginning of the list.

- **`void insert_end(int value)`**: Inserts a new node with value `value` at the end of the list.

- **`void delete_Node(int val)`**: Deletes the first node with the value `val` from the list. If the value is not found, it prints an error message.

- **`void delete_begin()`**: Deletes the node at the beginning of the list.

- **`void delete_end()`**: Deletes the node at the end of the list.

- **`void traverse()`**: Traverses the list and prints the values stored in each node.

## Example Usage

Here's a quick example of how to use this circular linked list in your program:

```cpp
#include<iostream>
#include"list.h"

int main() {
    list myList;

    myList.insert_begin(10);
    myList.insert_end(20);
    myList.insert_end(30);
    
    myList.traverse();  // Output: 10 -> 20 -> 30 -> NULL

    myList.delete_begin();
    myList.traverse();  // Output: 20 -> 30 -> NULL

    myList.delete_end();
    myList.traverse();  // Output: 20 -> NULL

    return 0;
}
