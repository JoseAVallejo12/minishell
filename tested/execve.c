#include "jvc.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int _execev(char **argvs)
{
    printf("\ndatos en argvs funtion execev\n");
    /* print the **argvs for test the code only */
    while (*(argvs) != NULL)
    {
        printf("%s\n", *(argvs));
        argvs++;
    }

   /*
    char *new_argv = _getlines();
    *char *argv[] = {" ","u","-x","jvc.h",NULL};
    char *filename = "/bin/chmod";
    }

    printf("Before execve\n");
    if (execve(filename, argv, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");*/

    return (0);
}

