#include "monty.h"
/**
  *sub- sustration
  *@sHead: stack sHead
  *@lNumber: line_number
  *Return: no return
 */
void sub(stack_t **sHead, unsigned int lNumber)
{
	stack_t *aux;
	int sus, nodes;

	aux = *sHead;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE);
	}
	aux = *sHead;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*sHead = aux->next;
	free(aux);
}
