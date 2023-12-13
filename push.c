#include "monty.h"
/**
 * push - push
 * @sHead: stack Head
 * @lNumber: line number
 * Return: void
*/
void push(stack_t **sHead, unsigned int lNumber)
{
	int x, y = 0, status = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			y++;
		for (; bus.arg[y] != '\0'; y++)
		{
			if (bus.arg[y] > 57 || bus.arg[y] < 48)
				status = 1; }
		if (status == 1)
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
	x = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(sHead, x);
	else
		addqueue(sHead, x);
}
