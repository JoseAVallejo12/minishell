#include "shell.h"

/**
 * _statusev - executa a external funtion
 * @argvs: arguments
 * Return: double pointer to string
 */
int main(void)
{
	pid_t pid;
	int status;
	char *argvs[] = {"/bin/ls", "-l", NULL};


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
		status = execve(argvs[0], argvs, NULL);
		if (status < 0)
		{
			perror("Error");
			exit(-1);
		}
	}
	return (0);
}
	/* allocated memory for double pointer */
/*	char *buf = (char *)malloc(sizeof(char) * strlen(argvs[0]) + 6);

	if (buf == NULL)
		return (-1);

	_strcat(buf, path);
	_strcat(buf, argvs[0]);
*/
	/* forking the process for exce call funtion */
/*	c_pid = fork();
	if (c_pid == 0)
	{
		if (statusve(path, argvs, NULL) == -1)
			perror("Error: statusve");
	}
	else if (c_pid > 0)
	{
		pid = wait(&status);
		if (pid < 0)
		{
			perror("wait");
			_exit(1);
		}
	}
	else
	{
		perror("fork failed");
		_exit(1);
	}
//	free(buf);
	return (0);
}
*/
