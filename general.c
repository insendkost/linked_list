#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "general.h"
#include "linked_func.h"

#include "delete_functions.h"


void printLine()
{
	int i;
	printf("\n");
	for (i = 0; i < 50; i++)
		printf("=");
	printf("\n");
}

void printSubLine()
{
	int i;
	printf("\n");
	for (i = 0; i < 10; i++)
		printf("-");
	printf("\n");
}
int getData()
{
	int val;
	printf("\nEnter data:\n");
	if(scanf("%d", &val));
	return val;
}

void deleteItemsMenu(single_node** ptr)
{
	int choice, flag = 1, pos;

	while (flag)
	{
		printf("\n  # DELETION MENU");
		printf("\n  # Choose options:");
		printSubLine();
		printf("\n1# - Delete from beginning");
		printf("\n2# - Delete from end");
		printf("\n3# - Delete from position");
		printf("\n4# - Cancel\n");
		printSubLine();
		if (scanf(" %d", &choice) > 0);
		switch (choice)
		{
		case 1:
			printf("\nPTR ADD: [%p]", *ptr);
			deleteFirst(ptr);
			//printf("\n[NOT AVAILABLE]\n");
			break;
		case 2:

			//printf("\n[NOT AVAILABLE]\n");
			deleteLast(ptr);
			break;
		case 3:

			//printf("\n[NOT AVAILABLE]\n");
			printf("\nEnter position:");
			if (scanf(" %d", &pos) >= 0);
			deleteFromPosition(ptr, pos);
			break;
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


