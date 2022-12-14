#include "monty.h"

/**
* instruction_pchar - function that prints the char at the top of the stack,
* followed by a new line
* @head: stack head
* @line_counter: line count
*
* Return: nothing
*/
void instruction_pchar(stack_t **head, unsigned int line_counter)
{
	stack_t *root;

	root = *head;
	if (!root)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (root->n > 127 || root->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", root->n);
}
