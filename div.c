#include "monty.h"
/**
 * div_fun - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void div_fun(stack_t **head, unsigned int counter)
{
	stack_t *head2;
	int length = 0, aux;

	head2 = *head;
	while (head2)
	{
		head2 = head2->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head2 = *head;
	if (head2->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = head2->next->n / head2->n;
	head2->next->n = aux;
	*head = head2->next;
	free(head2);
}
