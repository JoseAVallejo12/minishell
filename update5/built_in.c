#include "shell.h"

/**
 * is_built_in - check if is a funtion in
 * @argvs: arguments get in stdin
 * @env: enviroment var
 * Return: Always inter num
 */

int is_built_in(char **argvs, char **env)
{
	/* env built-in fun print the enviroment var */
	if (_strcmp(argvs[0], "env") == 0)
		return (_env(env));

	/* cd is internal funtion for navegate in the directory */
	if (_strcmp(argvs[0], "cd") == 0)
		return (_cd(argvs));

	/* if no math return -1 */
	return (-1);

}

/**
 * _env - a program that prints the parameter
 * @envi: function to  the parameter
 * Return: inter number
 */


int _env(char **env)
{
	unsigned int i;
	char *p;
	i = 0;

	if (env == NULL)
		return (-1);

	while (env[i] != NULL)
	{
		p = env[i];
		printf("%s\n", p);
		i++;
	}
	return (0);
}

/**
 * _cd- function buitl_in for enviroments
 * @argvs: operation to arguments
 *
 * Return: pointer to the correct function
 */

int _cd(char **argvs)
{
	return (0);
	int chdir_num;

	if (strcmp(argvs[0], "cd") == 0)
	{
		if (!argvs[1])
		{
			chdir_num = chdir("..");
			return (0);
		}
		chdir_num = chdir(argvs[1]);
		if (chdir_num != 0)
		{
			printf("Error changing directory\n");
			return (0);
		}
		return (0);
	}
	exit(0);
}
