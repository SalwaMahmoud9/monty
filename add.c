#include "monty.h"
/**
 * add - add
 * @head: head
 * @counter: counter
 * Return: void
*/
void add(stack_t **head, unsigned int counter)
{
	stack_t *h_Obj;
	int l = 0;
	int a;

	h_Obj = *head;
	while (h_Obj)
	{
		h_Obj = h_Obj->next;
		l++;
	}
	if (l <= 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h_Obj = *head;
	a = h_Obj->n + h_Obj->next->n;
	h_Obj->next->n = a;
	*head = h_Obj->next;
	free(h_Obj);
}
