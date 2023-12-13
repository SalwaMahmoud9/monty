#include "monty.h"
/**
 * pchar - pchar
 * @sHead: stack Head
 * @lNumber: line number
 * Return: void
*/
void pchar(stack_t **sHead, unsigned int lNumber)
{
	stack_t *head2;

	head2 = *sHead;
	if (!head2)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	if (head2->n > 127 || head2->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head2->n);
}
