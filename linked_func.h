#ifndef _LINKED__FUNC_H_
#define _LINKED__FUNC_H_

#define DEFAULT 0



//single_node** init_single_list_node(single_node** head);
void initMenu(single_node** head);
void print_list(single_node** head);
void printListFromEnd(single_node** head);

void addFirst(single_node** head_ref);
void addLast(single_node** head_ref);

//void addByPosition(single_node** head_ref);

single_node* createList(int keys[], int n);
void push_keys(single_node** head_ref, int data);
single_node** initNewSingleList(single_node** head_ref);
#endif //_LINKED__FUNC_H_