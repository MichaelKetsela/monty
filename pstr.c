#include "monty.h"

/**
* instruction_pstr - function that prints the string starting at the top of
* the stack, followed by a new
* @head: head of stack
* @line_counter: line count
*
* Return: nothing
*/
void instruction_pstr(stack_t **head, unsigned int line_counter)
{
	stack_t *root;
	(void)line_counter;

	root = *head;
	while (root)
	{
		if (root->n > 127 || root->n <= 0)
		{
			break;
		}
		printf("%c", root->n);
		root = root->next;
	}
	printf("\n");
}
