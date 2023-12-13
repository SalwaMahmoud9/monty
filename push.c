#include "monty.h"
/**
 * push - add node to the stack
 * @sHead: stack sHead
 * @lNumber: line_number
 * Return: no return
*/
void push(stack_t **sHead, unsigned int lNumber)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", lNumber);
			fclose(bus.file);
			free(bus.content);
			free_stack(*sHead);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", lNumber);
		fclose(bus.file);
		free(bus.content);
		free_stack(*sHead);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(sHead, n);
	else
		addqueue(sHead, n);
}
