#include "monty.h"

/**
* instruction_rotr - function that rotates the stack to the bottom
* @head: stack head of the stack
* @line_count: line count
*
* Return: nothing
*/
void i_rotr(stack_t **head,  __attribute__((unused)) unsigned int line_count)
{
	stack_t *dup;

	dup = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (dup->next)
	{
		dup = dup->next;
	}
	dup->next = *head;
	dup->prev->next = NULL;
	dup->prev = NULL;
	(*head)->prev = dup;
	(*head) = dup;
}
