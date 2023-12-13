#include "monty.h"
/**
 * swap - swap
 * @sHead: stack Head
 * @lNumber: line number
 * Return: void
*/
void swap(stack_t **sHead, unsigned int lNumber)
{
	stack_t *head2;
	int len = 0, aux;

	head2 = *sHead;
	while (head2)
	{
		head2 = head2->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	head2 = *sHead;
	aux = head2->n;
	head2->n = head2->next->n;
	head2->next->n = aux;
}
