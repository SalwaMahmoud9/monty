#include "monty.h"
/**
 * mod - mod
 * @sHead: sHead
 * @lNumber: lNumber
 * Return: void
*/
void mod(stack_t **sHead, unsigned int lNumber)
{
	stack_t *head_obj;
	int len = 0;
	int x;

	head_obj = *sHead;
	while (head_obj)
	{
		head_obj = head_obj->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	head_obj = *sHead;
	if (head_obj->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	x = head_obj->next->n % head_obj->n;
	head_obj->next->n = x;
	*sHead = head_obj->next;
	free(head_obj);
}
