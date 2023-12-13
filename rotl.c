#include "monty.h"
/**
  *rotl- rotate
  *@sHead: stack sHead
  *@lNumber: line number
  *Return: void
 */
void rotl(stack_t **sHead,  __attribute__((unused)) unsigned int lNumber)
{
	stack_t *stackT2 = *sHead, *aux;

	if (*sHead == NULL || (*sHead)->next == NULL)
	{
		return;
	}
	aux = (*sHead)->next;
	aux->prev = NULL;
	while (stackT2->next != NULL)
	{
		stackT2 = stackT2->next;
	}
	stackT2->next = *sHead;
	(*sHead)->next = NULL;
	(*sHead)->prev = stackT2;
	(*sHead) = aux;
}
