#include "shell.h"

/**
 * _getlines - get info the CLI
 * @paths_name: is the name of the file
 * @val_isatty: return value of isatty
 * Return: pointer to string inf typed for user
 */

char *_getlines(char **paths_name, int val_isatty)
{
	char *line = NULL;
	size_t bufer_len = 1024;
	ssize_t read = 0;
	/**EOF is defined in stdio.h (and is usually -1).*/
	read = getline(&line, &bufer_len, stdin);
	if (line == NULL)
	{
		perror("Error allocated memory");
		return (NULL);
	}
	/**if user type C-d */
	if (read == EOF)
	{
		if (val_isatty == 1)
		{
			printf("\n");
		}
		free(line);
		free_dp(paths_name);
		exit(EXIT_SUCCESS);
	}
	if (strcmp(line, "exit\n") == 0)
	{
		free(line);
		free_dp(paths_name);
		exit(EXIT_SUCCESS);
	}
	if (strcmp(line, "\n") == 0)
	{
		free(line);
		return (NULL);
		/**CLEAR_SCREEN;*/
	}
	if (strcmp(line, "k\n") == 0)
	{
		free(line);
		CLEAR_SCREEN;
		return (NULL);
	}
	return (line);
}
