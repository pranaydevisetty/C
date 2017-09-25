#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
}
void insert_end(struct node**h_ref,int new_data)
{
	
}

void insert_begin(struct node**h_ref, int new_data)
{
	struct node* new_node;
	new_node->data = new_data;
	new_node->next = *h_ref;
    *h_ref = new_node;
	
}

void insert_middle(struct node*prev,int new_data)
{
	
}

void printlist(struct node *h_ref)
{
	struct node* pnode = h_ref;
	while(pnode!=NULL)
	{
		printf("%d->",pnode->data);
		pnode = pnode->next;
	}
}
int main()
{
	struct node* head = NULL;
	
	insert_begin(&head,3);
	/*insert_end(&head,4);
	insert_end(&head,5);
	insert_end(&head,6);
	insert_end(&head,7);
	insert_end(&head,8);
	insert_end(&head,9);*/
	
	printlist(head);
}
