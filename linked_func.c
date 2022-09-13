#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "linked_func.h"
#include "general.h"
#include "insert_functions.h"
//

void print_list(single_node** head)
{
	int count = 0;
	single_node** ptr = head;
	
	printf("\nLIST DATA: ");
	if (ptr == NULL)
	{
		printf(" [Empty] ");
	}
	else
	{
		while (( * ptr) != NULL)
		{
			printf(" [%d]-> ", (*ptr)->data);
			*ptr = (* ptr)->next;
			count++;
			if (*ptr == NULL)
			{
				printf("[END_LIST]");
			}
		}


	}
	printf("\n[COUNT: %d]\n", count);
	printf("\n");
}

void printListFromEnd(single_node** head)
{
	single_node* temp = (*head);
	while (temp != NULL)
	{
		printf("[%d]-> ",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
void initMenu(single_node** head_ref)
{

	int choice, flag =1;
	int arr[] = { 3,5,6,7,8,1,2,4 }; //static array
	single_node** list; //(single_node**)malloc(sizeof(single_node*));
	list = head_ref;
	list = initNewSingleList(list);
	int size = sizeof(arr) / sizeof(arr[0]);
	single_node* head = NULL;
	single_node* ptr_ref = NULL;
	while (flag)
	{
		printLine();
		//printSubLine();
		printf("\nEnter you choice\n"),
		printf("\n1- Node with addFirst"),
		printf("\n2- Node with addLast"),
		printf("\n3- show current list"),
		printf("\n4- list of keys from array with push"),
		printf("\n5- delete operations"),
		printf("\n6- insert operations"),
		printf("\n7- quit");
		printLine();
		//createList() = here we initiate a new list and send it to the menu
		if(scanf(" %d", &choice)>=0);
		switch (choice)
		{

		case 1:
			
			addFirst(list);
			printf("\nRETURNED PTR ADD: [%p]", list);
			printf("\nRETURNED PTR DATA: [%d]", ( * list)->data);
			break;
		case 2:
			addLast(list);
			printListFromEnd(list);
			printf("\nPTR ADD: [%p]", *list);
			break;
		case 3:
			printf("\n[%p]", list);
			print_list(list);

			break;
		
		case 4:
			//creating a list from static array
			head = createList(arr, size);
			ptr_ref = head;
			while (ptr_ref)
			{
				printf(" [%d] ->", ptr_ref->data);
				ptr_ref = ptr_ref->next;
				if (ptr_ref == NULL)
					printf("[END]");
			}
			break;
		
		
		case 5:
			deleteItemsMenu(list);
			
			break;
		case 6:
			insertMenu(list);

			break;
		case 7:
			printf("\nFinishing prog...");

			exit(0);
		default:
			printf("\nFalse choice");
			break;
		}
	}
}



void addFirst(single_node** head_ref) //insert at the beginning
{
	int new_data;
	single_node* new_node = (single_node*)malloc(sizeof(single_node));
	new_data = getData();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
	
}

void addLast(single_node** head_ref)
{
	int new_data;
	
	single_node* new_node = (single_node*)malloc(sizeof(single_node));
	new_data = getData();
	new_node->data = new_data;
	
	
	new_node->next = NULL;
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
	}
	
	else
	{
		single_node* lastNode = *head_ref;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = new_node;
	}
	
	
	
}




single_node* createList(int keys[], int n)
{
	int i;
	single_node* head = NULL;
	for (i = n - 1; i >= 0; i--)
	{
		push_keys(&head, keys[i]);
	}

	return head;
}

void push_keys(single_node** head_ref, int data)
{
	single_node* tmp = (single_node*)malloc(sizeof(single_node));
	tmp->data = data;
	tmp->next = *head_ref;
	*head_ref = tmp;
}

single_node** initNewSingleList(single_node** head_ref)
{
	single_node* new_head = (single_node*)malloc(sizeof(single_node));
	
	int data = DEFAULT; //by default
	new_head->data = data;
	new_head->next = (*head_ref);
	(*head_ref) = new_head;
	return head_ref;
}

//single_node** init_single_list_node(single_node** ptr)
//{
//	single_node* new_node = (single_node*)malloc(sizeof(single_node));
//	
//	if (!new_node)
//	{
//		exit(-1);
//	}
//	
//		single_node* head;
//		single_node* temp = NULL;
//		temp = head = new_node;
//		(*ptr) = head = new_node;
//
//	//int data;
//
//	if (head == NULL)
//	{
//		head = temp = new_node;
//	}
//	else {
//		temp->next = new_node;
//		temp = new_node;
//	}
//	printf("\nEnter data:\n");
//	if(scanf("%d", &new_node->data));
//	
//	
//	new_node->next = (*ptr); 
//	head = new_node;
//	printf("\nNEW NODE ADD:      [%p]", new_node);
//	printf("\nNEW NODE_DATA ADD  [%p]", &(new_node->data));
//	printf("\nNEW_NODE_DATA      [%d]", new_node->data);
//	printf("\nHEAD ADD:          [%p]", head);
//	printf("\nHEAD_DATA ADD:     [%p]", &(head->data));
//	printf("\nHEAD_NODE_DATA     [%d]", new_node->data);
//
//
//	
//	printLine();
//	return ptr;
//}