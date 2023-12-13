#include "monty.h"
/**
 * pchar - prints the char at the top of the stack,
 * followed by a new line
 * @sHead: stack sHead
 * @lNumber: line_number
 * Return: no return
*/
void pchar(stack_t **sHead, unsigned int lNumber)
{
	stack_t *h;

	h = *sHead;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
