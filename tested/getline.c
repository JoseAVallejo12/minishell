#include "jvc.h"

char *_getlines(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read = 0;

	/* EOF is defined in stdio.h (and is usually -1). */
	printf("\"$ \"");
	read = getline(&line, &len, stdin);

	if (_strcmp(line, "clear") == 0)
		system("clear");

	if (read == EOF)
		return (NULL);

	return (line);
}

