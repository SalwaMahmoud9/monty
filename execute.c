#include "monty.h"
/**
* execute - execute
* @head: head
* @lNumber: lNumber
* @file: file
* @content: content
* Return: int
*/
int execute(char *content, stack_t **head, unsigned int lNumber, FILE *file)
{
	unsigned int i = 0;
	char *op;
	instruction_t ints[] = {
				{"push", push}, {"pall", pall}, {"pint", pint},
				{"pop", pop}, {"swap", swap}, {"add", add},
				{"nop", nop}, {"sub", sub}, {"div", divFunc},
				{"mul", mul}, {"mod", mod}, {"pchar", pchar},
				{"pstr", pstr}, {"rotl", rotl}, {"rotr", rotr},
				{"queue", queue}, {"stack", stack}, {NULL, NULL}
				};
	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (ints[i].opcode && op)
	{
		if (strcmp(op, ints[i].opcode) == 0)
		{	ints[i].f(head, lNumber);
			return (0);
		}
		i++;
	}
	if (op && ints[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", lNumber, op);
		fclose(file);
		free(content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	return (1);
}
