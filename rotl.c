#include "monty.h"
/**
  *rotl- rotates the stack to the top
  *@sHead: stack sHead
  *@lNumber: line_number
  *Return: no return
 */
void rotl(stack_t **sHead,  __attribute__((unused)) unsigned int lNumber)
{
	stack_t *tmp = *sHead, *aux;

	if (*sHead == NULL || (*sHead)->next == NULL)
	{
		return;
	}
	aux = (*sHead)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *sHead;
	(*sHead)->next = NULL;
	(*sHead)->prev = tmp;
	(*sHead) = aux;
}
