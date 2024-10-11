#include <iostream>
#include "node.h"
#include "list.h"
using namespace std;

list::list() {
    head = new node;  
    head->data = 0;   
    head->next = head;
}

// Checks if the list is empty
bool list::emptyList() {
    return (head->next == head); 
}

void list::insert_after(int oldV, int newV) {
    node* temp = head->next;
    node* newNode = new node;
    newNode->data = newV;

    while (temp != head) { 
        if (temp->data == oldV) {
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    }
    cout << "Sorry, value not found" << endl;
}

void list::insert_begin(int value) {
    node* n1 = new node;
    n1->data = value;

    if (emptyList()) {
        n1->next = head;
        head->next = n1; 
    }
    else {
        n1->next = head->next;
        head->next = n1;
    }
}

// Inserts a new node at the end of the list
void list::insert_end(int value) {
    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    node* n2 = new node;
    n2->data = value;
    n2->next = head;
    temp->next = n2;
}

// Deletes a node with a specific value
void list::delete_Node(int val) {
    if (emptyList()) {
        cout << "No element found to delete" << endl;
        return;
    }

    node* temp = head;
    node* prev = nullptr;

    while (temp->next != head) {
        if (temp->next->data == val) {
            node* delVal = temp->next;
            temp->next = temp->next->next;
            delete delVal;
            return;
        }
        temp = temp->next;
    }
    cout << "Value not found in the list" << endl;
}

// Deletes a node from the beginning of the list
void list::delete_begin() {
    if (emptyList()) {
        cout << "No element found to delete" << endl;
        return;
    }

    node* delFirst = head->next;
    head->next = delFirst->next;
    delete delFirst;
}

// Deletes a node from the end of the list
void list::delete_end() {
    if (emptyList()) {
        cout << "No element found to delete" << endl;
        return;
    }

    node* temp = head;
    while (temp->next->next != head) {
        temp = temp->next;
    }

    node* delEnd = temp->next;
    temp->next = head;
    delete delEnd;
}

// Displays the values stored in the list
void list::traverse() {
    if (emptyList()) {
        cout << "List is empty" << endl;
        return;
    }

    node* temp = head->next;
    while (temp != head) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
