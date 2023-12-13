#include "monty.h"
/**
 * queue - prints the top
 * @sHead: stack sHead
 * @lNumber: line_number
 * Return: no return
*/
void queue(stack_t **sHead, unsigned int lNumber)
{
	(void)sHead;
	(void)lNumber;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @sHead: sHead of the stack
 * Return: no return
*/
void addqueue(stack_t **sHead, int n)
{
	stack_t *new_node, *aux;

	aux = *sHead;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*sHead = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
