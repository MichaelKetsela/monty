#include "monty.h"

/**
* addnode - function that adds node to the head stack
* @head: head of the stack
* @n: new value
*
* Return: nothing
*/
void addnode(stack_t **head, int n)
{
	stack_t *new, *curr;

	curr = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{ printf("Error: malloc failed\n");
		exit(EXIT_FAILURE); }
	if (curr)
		curr->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

}
