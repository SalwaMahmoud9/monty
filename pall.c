#include "monty.h"
/**
 * pall - prints the stack
 * @sHead: stack sHead
 * @lNumber: no used
 * Return: no return
*/
void pall(stack_t **sHead, unsigned int lNumber)
{
	stack_t *h;
	(void)lNumber;

	h = *sHead;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
