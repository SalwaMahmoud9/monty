#include "monty.h"
/**
 * mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @sHead: stack sHead
 * @lNumber: line_number
 * Return: no return
*/
void mod(stack_t **sHead, unsigned int lNumber)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	h = *sHead;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*sHead = h->next;
	free(h);
}
