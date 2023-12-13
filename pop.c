#include "monty.h"
/**
 * pop - pop
 * @sHead: stack Head
 * @lNumber: line number
 * Return: void
*/
void pop(stack_t **sHead, unsigned int lNumber)
{
	stack_t *head2;

	if (*sHead == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	head2 = *sHead;
	*sHead = head2->next;
	free(head2);
}
