#include "monty.h"
/**
* execute - executes the opcode
* @stack1: sHead linked list - stack1
* @lNumber: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack1, unsigned int lNumber, FILE *file)
{
	instruction_t opst[] = {
				{"push", push}, {"pall", pall}, {"pint", pint},
				{"pop", pop},
				{"swap", swap},
				{"add", add},
				{"nop", nop},
				{"sub", sub},
				{"div", divFunc},
				{"mul", mul},
				{"mod", mod},
				{"pchar", pchar},
				{"pstr", pstr},
				{"rotl", rotl},
				{"rotr", rotr},
				{"queue", queue},
				{"stack", stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack1, lNumber);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", lNumber, op);
		fclose(file);
		free(content);
		free_stack(*stack1);
		exit(EXIT_FAILURE); }
	return (1);
}
