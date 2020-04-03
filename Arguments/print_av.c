#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
/**
 *
 */

int main(int ac, char **av)
{
	int i = 1;
	(void)ac;

	while (*(av + i) != NULL)
	{
		printf("%s ", av[i]);
		i++;
	}

	return (0);
}

