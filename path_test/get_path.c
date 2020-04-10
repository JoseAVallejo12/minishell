#include "shell.h"

/**
 * get_patht - get the PATH in the environment
 * @env: enviroment var
 * Return: double ponter with each route in the path.
 */
char **get_path(char **env)
{
	char *str = "PATH";
	char *delimt = " \t\r\n\a :=";
	char *my_path, *my_path_cpy;
	char **paths;
	unsigned int i = 0, j = 0;
	/* loop for find the PATH var, in the **env */
	while (env[i] != NULL)
	{
		my_path = _strstr(env[i], str);
		if (my_path != NULL)
		{
			my_path_cpy = strdup(my_path);
			/* allocated memory only if found the path */
			if (my_path_cpy != NULL)
			{
				paths = (char **)malloc(sizeof(char *) * 20);
				/* if fail copy path string or fail the malloc return NULL */
				if (paths == NULL)
				{
					free(my_path_cpy);
					return (NULL);
				}
				/* split all string and return pointer to each memory positions */
				strtok(my_path, delimt);
				while (my_path != NULL)
				{
					paths[j] = my_path;
					j++;
				/*	printf("%s\n", my_path);*/
					my_path = strtok(NULL, delimt);
				}
				paths[j] = NULL;
				free(my_path_cpy);
			/*	free(paths);*/
				return (paths);
			}
			return (NULL);
		}
		i++;
	}
	return (NULL);
}
