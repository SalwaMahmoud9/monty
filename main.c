#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - main
* @argc: argc
* @argv: argv
* Return: int
*/
int main(int argc, char *argv[])
{
	char *content;
	stack_t *stack = NULL;
	unsigned int lNumber = 0;
	size_t size = 0;
	ssize_t r_l = 1;
	FILE *file;
	

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_l > 0)
	{
		content = NULL;
		r_l = getline(&content, &size, file);
		bus.content = content;
		lNumber++;
		if (r_l > 0)
		{
			execute(content, &stack, lNumber, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
