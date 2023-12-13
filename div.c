#include "monty.h"
/**
 * divFunc - divFunc
 * @sHead: sHead
 * @lNumber: lNumber
 * Return: void
*/
void divFunc(stack_t **sHead, unsigned int lNumber)
{
	stack_t *head_Obj;
	int len = 0;
	int x;

	head_Obj = *sHead;
	while (head_Obj)
	{
		head_Obj = head_Obj->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	head_Obj = *sHead;
	if (head_Obj->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	x = head_Obj->next->n / head_Obj->n;
	head_Obj->next->n = x;
	*sHead = head_Obj->next;
	free(head_Obj);
}
