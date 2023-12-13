#include "monty.h"
/**
 * addnode - addnode
 * @head: head
 * @n: n
 * Return: void
*/
void addnode(stack_t **head, int n)
{

	stack_t *n_nd;
	stack_t *a;

	a = *head;
	n_nd = malloc(sizeof(stack_t));
	if (n_nd == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a)
		a->prev = n_nd;
	n_nd->n = n;
	n_nd->next = *head;
	n_nd->prev = NULL;
	*head = n_nd;
}
