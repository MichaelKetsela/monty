#include "monty.h"

/**
* instruction_queue - function that prints the top of the queue
* @head: head of queue
* @line_counter: line count
*
* Return: nothing
*/
void instruction_queue(stack_t **head, unsigned int line_counter)
{
	(void)head;
	(void)line_counter;
	bus.lifi = 1;
}

/**
* addqueue - function that add node to the tail the queue
* @n: new value
* @head: head of the queue
*
* Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new, *curr;

	curr = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
	}
	new->n = n;
	new->next = NULL;
	if (curr)
	{
		while (curr->next)
			curr = curr->next;
	}
	if (!curr)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		curr->next = new;
		new->prev = curr;
	}
}
