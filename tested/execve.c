#include "jvc.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int _execev(char **argvs)
{
    /* print the **argvs for test the code only */
/*    while (*(argvs) != NULL)
    {
        printf("%s\n", *(argvs));
        argvs++;
    }
*/
/*    char *argv[] = {" ","u","-x","jvc.h",NULL};

*/
 /*   char *path = "/bin/";
    char *buf = (char *)malloc(sizeof(char) * strlen(argvs[0]) + 6);
    char *buf2 = (char *)malloc(sizeof(char) * 64);
    getcwd(buf2, 64);
    _strcat(buf, path);
    _strcat(buf, argvs[0]);
    printf("Buffer %s$", buf); */
    if (execve(argvs[0], argvs, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
	/*free(buf);*/

    return (0);
}

