#include "monty.h"
/**
  *rotr- rotates the stack to the bottom
  *@sHead: stack sHead
  *@lNumber: line_number
  *Return: no return
 */
void rotr(stack_t **sHead, __attribute__((unused)) unsigned int lNumber)
{
	stack_t *copy;

	copy = *sHead;
	if (*sHead == NULL || (*sHead)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *sHead;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*sHead)->prev = copy;
	(*sHead) = copy;
}
