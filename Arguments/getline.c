#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int _getcwd(void);

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	char  *pch = NULL;
	ssize_t read = 0;

	/* EOF is defined in stdio.h (and is usually -1). */
	while ((read != EOF))
	{
		printf("\"$ \"");
		read = getline(&line, &len, stdin);
		printf("Retrieved line of length %zu :", read);
		printf("%s", line);
		if (line[0] == 'x')
			read = -1;
	}

	pch = strtok (line," ,.-");
	while (pch != NULL)
	{
		printf ("%s\n",pch);
		pch = strtok (NULL, " ,.-");
	}
	if (line)
		free(line);
	
	return (EXIT_SUCCESS);
}

