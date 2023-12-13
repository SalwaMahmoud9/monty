#include "monty.h"
/**
 * queue - queue
 * @sHead: stack Head
 * @lNumber: line number
 * Return: no return
*/
void queue(stack_t **sHead, unsigned int lNumber)
{
	(void)sHead;
	(void)lNumber;
	bus.lifi = 1;
}

/**
 * addqueue - addqueue
 * @n: new_value
 * @sHead: Head
 * Return: void
*/
void addqueue(stack_t **sHead, int n)
{
	stack_t *node1, *aux;

	aux = *sHead;
	node1 = malloc(sizeof(stack_t));
	if (node1 == NULL)
	{
		printf("Error\n");
	}
	node1->n = n;
	node1->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*sHead = node1;
		node1->prev = NULL;
	}
	else
	{
		aux->next = node1;
		node1->prev = aux;
	}
}
