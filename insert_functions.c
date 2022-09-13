#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "linked_func.h"
#include "general.h"
#include "delete_functions.h"
#include "insert_functions.h"

void insertMenu(single_node** head_ref)
{
	int choice, flag = 1, pos;

	while (flag)
	{
		printf("\n  # DELETION MENU");
		printf("\n  # Choose options:");
		printSubLine();
		printf("\n1# - insert first");
		printf("\n2# - insert last");
		printf("\n3# - insert at position");
		printf("\n4# - Cancel\n");
		printSubLine();
		if (scanf(" %d", &choice) > 0);
		switch (choice)
		{
		case 1:
			printf("\nPTR ADD: [%p]", *head_ref);
			//insertFirst(ptr);
			printf("\n[NOT AVAILABLE]\n");
			break;
		case 2:

			printf("\n[NOT AVAILABLE]\n");
			//insertLast(ptr);
			break;
		case 3:

			printf("\n[NOT AVAILABLE]\n");
			/*printf("\nEnter position:");
			if (scanf(" %d", &pos) >= 0);
			insertAtPosition(ptr, pos);
			*/break;
		case 4:

			printf("\nCancelling action....");
			flag = 0;
			break;
		default:
			printf("\nFalse option");
			break;
		}
	}

}

void insertFirst(single_node** head_ref)
{
	single_node* new_node = (single_node*)malloc(sizeof(single_node));
	single_node* head = (*head_ref);
	
	int data = getData();
	new_node->data = data;
	new_node->next = (*head_ref);
	*head_ref = new_node;

}