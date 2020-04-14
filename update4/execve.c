#include "shell.h"
/**
 * _execev - executa a external funtion
 * @argvs: arguments
 * @env: arguments
 * Return: double pointer to string
 */
int _execev(char **argvs, char **env)
{
	pid_t pid;
	int status;
	(void)argvs;

	pid = fork();
	if (pid < 0)
	{
		printf("Error during fork\n");
		exit(-1);
	}
	else if (pid != 0)
	{
		wait(NULL);
		return (0);
	}
	else
	{
		status = execve(argvs[0], argvs, env);
		if (status < 0)
		{
			free_dp(argvs);
			perror("Error");
			exit(-1);
		}
		exit(EXIT_SUCCESS);
}
return (0);
}
