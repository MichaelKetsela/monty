#include "monty.h"

/**
* instruction_pint - function that prints the top of the stack
* @head: double head pointer to the stack
* @line_counter: line count
*
* Return: nothing
*/
void instruction_pint(stack_t **head, unsigned int line_counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
