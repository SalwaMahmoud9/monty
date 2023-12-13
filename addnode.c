#include "monty.h"
/**
 * addnode - addnode
 * @sHead: sHead
 * @n: n
 * Return: void
*/
void addnode(stack_t **sHead, int n)
{

	stack_t *node_N;
	stack_t *x;

	x = *sHead;
	node_N = malloc(sizeof(stack_t));
	if (node_N == NULL)
	{ 
		printf("Error\n");
		exit(0); 
	}
	if (x)
		x->prev = node_N;
	node_N->n = n;
	node_N->next = *sHead;
	node_N->prev = NULL;
	*sHead = node_N;
}
