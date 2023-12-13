#include "monty.h"
/**
 * pstr - pstr
 * @sHead: stack sHead
 * @lNumber: line_number
 * Return: no return
*/
void pstr(stack_t **sHead, unsigned int lNumber)
{
	stack_t *head2;
	(void)lNumber;

	head2 = *sHead;
	while (head2)
	{
		if (head2->n > 127 || head2->n <= 0)
		{
			break;
		}
		printf("%c", head2->n);
		head2 = head2->next;
	}
	printf("\n");
}
