#include "monty.h"

/**
* instruction_rotl- function that rotates the stack to the top
* @head: head of the stack
* @line_counter: line count
*
* Return: nothing
*/
void instruction_rotl(stack_t **head, unsigned int line_counter)
{
(void)line_counter;
stack_t *curr = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = *head;
	(*head)->next = NULL;
	(*head)->prev = curr;
	(*head) = aux;
}
