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
	char *cont;
	unsigned int count = 0;
	stack_t *stk = NULL;
	FILE *fl;
	size_t s_t = 0;
	ssize_t r_l = 1;
	
	

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fl = fopen(argv[1], "r");
	bus.file = fl;
	if (!fl)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_l > 0)
	{
		con = NULL;
		r_l = getline(&con, &s_t, fl);
		bus.content = con;
		count++;
		if (r_l > 0)
		{
			execute(con, &stk, count, fl);
		}
		free(con);
	}
	free_stack(stk);
	fclose(fl);
return (0);
}
