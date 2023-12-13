#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @sHead: stack sHead
 * @lNumber: line_number
 * Return: no return
*/
void pstr(stack_t **sHead, unsigned int lNumber)
{
	stack_t *h;
	(void)lNumber;

	h = *sHead;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
