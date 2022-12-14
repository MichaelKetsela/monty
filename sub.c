#include "monty.h"

/**
* instruction_sub - function that substracts nodes
* @head: double head pointer to the stack
* @line_counter: line count
*
* Return: nothing
*/
void instruction_sub(stack_t **head, unsigned int line_counter)
{
	stack_t *curr;
	int sub, sec;

	curr = *head;
	for (sec = 0; curr != NULL; sec++)
		curr = curr->next;
	if (sec < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	curr = *head;
	sub = curr->next->n - curr->n;
	curr->next->n = sub;
	*head = curr->next;
	free(curr);
}
