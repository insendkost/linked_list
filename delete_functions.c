#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "linked_func.h"
#include "general.h"
#include "delete_functions.h"

void deleteFromPosition(single_node** head_ref, int key)
{
	single_node* temp;

	if (listCheck(head_ref) == 0)
		return;
	
	if ((*head_ref)->data == key)
	{
		temp = (*head_ref); //backup the head to free its memory
		(*head_ref) = (*head_ref)->next;
		free(temp);
	}
	else
	{
		single_node* current = (*head_ref);
		while (current->next != NULL)
		{
			if (current->next->data == key)
			{
				temp = current->next;
				current->next = current->next->next;
				free(temp);
				break;
			}
			else
			{
				current = current->next;
			}
		}
	}
}


void deleteFirst(single_node** head_ref)
{
	if (listCheck(head_ref) == 0)
		return;

	
	single_node* temp = (*head_ref);
	(*head_ref) = (*head_ref)->next;
	free(temp);

}

void deleteLast(single_node** head_ref)
{
	
	if (listCheck(head_ref) == 0)
		return;

	single_node* temp = (*head_ref);
	(*head_ref) = (*head_ref)->next;
	
	//we have to traverse all the list till the end
	while (temp->next->next)
	{
		temp = temp->next;
	}
	//now we are at he end point
	temp->next = NULL;
	

}

int listCheck(single_node** head_ref)
{
	if ((*head_ref) == NULL)
	{
		printSubLine();
		printf("\nError,empty list");
		printSubLine();
		return 0;
	}
	return 1;
}
