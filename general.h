#ifndef _GENERAL_H_
#define _GENERAL_H_

typedef struct single_node single_node;

struct single_node {
	int data; //holds a data

	single_node* next;
};

typedef struct doubly_node doubly_node;

struct doubly_node {
	int data;

	doubly_node* next;
	doubly_node* previous;
};

void printLine();
int getData();
void printSubLine();
void deleteItemsMenu(single_node** ptr);

#endif