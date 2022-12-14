#include "monty.h"

/**
* instruction_pop - function that prints the top of the stack
* @head: double head pointer to the stack
* @line_counter: line count
*
* Return: nothing
*/
void instruction_pop(stack_t **head, unsigned int line_counter)
{
	stack_t *root;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	root = *head;
	*head = root->next;
	free(root);
}
