#include "monty.h"
/**
 * addnode - add node to the sHead stack
 * @sHead: sHead of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **sHead, int n)
{

	stack_t *new_node, *aux;

	aux = *sHead;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *sHead;
	new_node->prev = NULL;
	*sHead = new_node;
}
