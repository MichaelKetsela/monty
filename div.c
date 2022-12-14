#include "monty.h"

/**
* instruction_div - function that divides the top two elements of the stack
* @head: double head pointer to the stack
* @line_counter: line count
*
* Return: nothing
*/
void instruction_div(stack_t **head, unsigned int line_counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	root = *head;
	if (root->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = root->next->n / root->n;
	root->next->n = temp;
	*head = root->next;
	free(root);

}
