#include "monty.h"
/**
 * pint - print
 * @sHead: stack Head
 * @lNumber: line number
 * Return: void
*/
void pint(stack_t **sHead, unsigned int lNumber)
{
	if (*sHead == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*sHead)->n);
}
