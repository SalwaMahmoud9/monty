#include "monty.h"
/**
 * pall - pall
 * @sHead: sHead
 * @lNumber: lNumber
 * Return: void
*/
void pall(stack_t **sHead, unsigned int lNumber)
{
	stack_t *head_obj;
	(void)lNumber;

	head_obj = *sHead;
	if (head_obj == NULL)
		return;
	while (head_obj)
	{
		printf("%d\n", head_obj->n);
		head_obj = head_obj->next;
	}
}
