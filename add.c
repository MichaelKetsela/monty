#include "monty.h"

/**
* instruction_add - function that adds the top two elements of the stack
* @head: double pointer head to the stack
* @line_counter: line count
*
* Return: nothing
*/
void instruction_add(stack_t **head, unsigned int line_counter)
{
	stack_t *root;
	int l = 0, curr;

	root = *head;
	while (root)
	{
		root = root->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	root = *head;
	curr = root->n + root->next->n;
	root->next->n = curr;
	*head = root->next;
	free(root);

}
