#include "shell.h"
/**
 * main - all my functions
 * @ac: operation
 * @av: operation
 * @env: operation
 *
 * Return: pointer to the correct function
 */

int main(int ac, char **av, char **env)
{

	(void)ac;
	char **paths_name = get_path(env);
	int status = 0, errno = 1;

	/**initiate_shell();*/
	while (status != -1)
	{
		/* if shell run in no-interactive mode no show prompt */
		if (isatty(STDIN_FILENO) == 1)
			prompt_shell();

		/* 1. get the input the command line */
		char *argv = _getlines(paths_name, isatty(STDIN_FILENO));
		if (argv != NULL)
		{
			/* 2. split the input line with strtok funtion and return 2d ponter */
			char **split_argv = _strtok(argv);
			/* 3. find if is a built-in funtion  */
			if (is_built_in(split_argv, env) != 0)
			{
			/* 4. not is a built, find in the path, if math execve else error msn */
				if (check_path(paths_name, split_argv) == 0)
					status = _execev(split_argv, env);
				else
					printf("%s: %d: %s: not found\n", av[0], errno, split_argv[0]);
			}
			/* ejeccution counter */
			errno++;
			/* free memory */
			free(argv);
			split_argv = free_dp(split_argv);
		}
	}
	return (0);
}
