#include "monty.h"

/**
* instruction_mod - function that computes the remainder of the division
* of the second top element of the stack by the top element of the stack
* @head: double head pointer to the stack
* @line_counter: line count
*
* Return: nothing
*/
void instruction_mod(stack_t **head, unsigned int line_counter)
{
	stack_t *tail;
	int i = 0, curr;

	tail = *head;
	while (tail)
	{
		tail = tail->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tail = *head;
	if (tail->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	curr = tail->next->n % tail->n;
	tail->next->n = curr;
	*head = tail->next;
	free(tail);

}

