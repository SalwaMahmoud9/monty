#include "monty.h"
/**
* execute - execute
* @stack: stack
* @counter: counter
* @file: file
* @content: content
* Return: int
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	unsigned int i = 0;
	char *op;
	instruction_t ot[] = {
				{"push", push}, {"pall", pall}, {"pint", pint},
				{"pop", pop},
				{"swap", swap},
				{"add", add},
				{"nop", nop},
				{"sub", sub},
				{"div", div},
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
	

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (ot[i].opcode && op)
	{
		if (strcmp(op, ot[i].opcode) == 0)
		{	ot[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && ot[i].opcode == NULL)
	{ 
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); 
	}
	return (1);
}
