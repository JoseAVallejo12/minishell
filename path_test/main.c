#include "shell.h"

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */

int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;

	char **test = get_path(env);
	char *p;
	char *ptr = *test;

	while (*test != NULL)
	{
		p = *test;
		printf("%s\n", p);
		test++;
	}
	*test = ptr;
	free(test);

	return (0);
}
