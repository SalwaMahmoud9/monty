#include "monty.h"
/**
 * mul - multiplies the top two elements of the stack.
 * @sHead: stack sHead
 * @lNumber: line_number
 * Return: no return
*/
void mul(stack_t **sHead, unsigned int lNumber)
{
	stack_t *h;
	int len = 0, aux;

	h = *sHead;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	h = *sHead;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*sHead = h->next;
	free(h);
}
