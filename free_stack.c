#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @sHead: sHead of the stack
*/
void free_stack(stack_t *sHead)
{
	stack_t *aux;

	aux = sHead;
	while (sHead)
	{
		aux = sHead->next;
		free(sHead);
		sHead = aux;
	}
}
