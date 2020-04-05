/* strtok example */
#include "jvc.h"

int main ()
{
    /* char *buf = NULL;*/
    char *argv = _getlines();
    char **split_argv = _strtok(argv);

    while (*(split_argv) != NULL)
    {
        printf("%s\n", *(split_argv));
        split_argv++;
    }

    return 0;
}
