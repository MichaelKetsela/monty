#include "monty.h"

/**
* free_stack - function that frees a doubly linked list
* @head: head pointer to the stack
*
* Return: nothing
*/
void free_stack(stack_t *head)
{
	stack_t *curr;

	curr = head;
	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}

}
