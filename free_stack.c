#include "monty.h"
/**
* free_stack - free_stack
* @sHead: sHead
* Return: void
*/
void free_stack(stack_t *sHead)
{
	stack_t *x;

	x = sHead;
	while (sHead)
	{
		x = sHead->next;
		free(sHead);
		sHead = x;
	}
}
