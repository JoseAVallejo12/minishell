#include "jvc.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int _execev(char **argvs)
{
    pid_t c_pid, pid;
    int status;
    char *path = "/bin/";
    char *buf = (char *)malloc(sizeof(char) * strlen(argvs[0]) + 6);
    _strcat(buf, path);
    _strcat(buf, argvs[0]);

    /* forking the process for exce call funtion */
    c_pid = fork();
    if (c_pid == 0)
    {
        if (execve(buf, argvs, NULL) == -1)
            perror("Error: execve");
    }
    else if (c_pid > 0)
    {
        if( (pid = wait(&status)) < 0)
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
    return (0); //return success
}

