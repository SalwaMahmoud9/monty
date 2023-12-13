#include "monty.h"
/**
 * add - add
 * @sHead: sHead
 * @lNumber: lNumber
 * Return: void
*/
void add(stack_t **sHead, unsigned int lNumber)
{
	stack_t *head_obj;
	int len = 0, aux;

	head_obj = *sHead;
	while (head_obj)
	{
		head_obj = head_obj->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	head_obj = *sHead;
	aux = head_obj->n + head_obj->next->n;
	head_obj->next->n = aux;
	*sHead = head_obj->next;
	free(head_obj);
}
