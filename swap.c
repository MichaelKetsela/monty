#include "monty.h"

/**
* instruction_swap - function that swaps the top two elements of the stack
* @head: head of stack
* @line_counter: line count
*
* Return: nothing
*/
void instruction_swap(stack_t **head, unsigned int line_counter)
{
	stack_t *root;
	int length = 0, temp;

	root = *head;
	while (root)
	{
		root = root->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	root = *head;
	temp = root->n;
	root->n = root->next->n;
	root->next->n = temp;
}
