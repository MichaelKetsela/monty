#include "monty.h"

/**
* instruction_pall - function that prints everything in the stack
* @head: double head pointer to the stack
* @line_counter: unused line count
*
* Return: nothing
*/
void instruction_pall(stack_t **head, unsigned int line_counter)
{
	stack_t *tail;
	(void)line_counter;

	tail = *head;
	if (tail == NULL)
		return;
	while (tail)
	{
		printf("%d\n", tail->n);
		tail = tail->next;
	}
}
