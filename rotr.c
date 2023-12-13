#include "monty.h"
/**
  *rotr- rotate
  *@sHead: stack Head
  *@lNumber: line number
  *Return: void
 */
void rotr(stack_t **sHead, __attribute__((unused)) unsigned int lNumber)
{
	stack_t *stackT3;

	stackT3 = *sHead;
	if (*sHead == NULL || (*sHead)->next == NULL)
	{
		return;
	}
	while (stackT3->next)
	{
		stackT3 = stackT3->next;
	}
	stackT3->next = *sHead;
	stackT3->prev->next = NULL;
	stackT3->prev = NULL;
	(*sHead)->prev = stackT3;
	(*sHead) = stackT3;
}
