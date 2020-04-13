#include "shell.h"

int main (int ac, char **av, char **env)
{
	(void) ac;
	(void) av;
	char **paths_name = get_path(env);  /* MALLOC 1 AND MALLOC 1.n: n rutas */

    int status = 0;

	//initiate_shell();
    while (status != -1)
	{
		status++;
		if(isatty(STDIN_FILENO) == 1)
			prompt_shell();
		/* get the input the command line */
		char *argv = _getlines(paths_name); /* MAllOC 2; */
		/* split the input line with strtok funtion and return 2d ponter */
		if (argv != NULL)
		{
			char **split_argv = _strtok(argv); /* MALLOC 3 AND MALLOC 3.n: n work */

			if(check_path(paths_name, split_argv) == 0)
				status = _execev(split_argv, env);
			else
				printf("%s: %d: %s not found\n", av[0], status, split_argv[0]);

			//printf("\nlen path %s is %lu\n", split_argv[0], )trlen(split_argv[0]));
			/* check split_argv[0] for there is an bult-in funtion */
			/* -----CALL FUNTION FOR BULT-IN FUNTIONS----- */
			/* call the funtion for executing external funtions with exec */

			/* free memory */
			free(argv);
			split_argv = free_dp(split_argv);
		}
    }
    return (0);
}
