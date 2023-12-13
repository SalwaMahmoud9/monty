#include "monty.h"
/**
 * pop - prints the top
 * @sHead: stack sHead
 * @lNumber: line_number
 * Return: no return
*/
void pop(stack_t **sHead, unsigned int lNumber)
{
	stack_t *h;

	if (*sHead == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	h = *sHead;
	*sHead = h->next;
	free(h);
}
