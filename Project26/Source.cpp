#include<iostream>
#include"list.h"
using namespace std;
int main() {
	list* l = new list;
	l->insert_begin(5);
	l->insert_begin(10);
	l->insert_begin(15);
	l->insert_begin(20);
	l->insert_begin(25);
	l->insert_end(50);
	l->insert_after(20, 100);
	l->delete_begin();
	l->delete_end();
	l->delete_Node(10);
	l->traverse();
	return 0;
}
