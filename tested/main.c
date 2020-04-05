/* strtok example */
#include "jvc.h"

int main ()
{
    /* get the input the command line */
    char *argv = _getlines();
    /* split the input line with strtok funtion and return 2d ponter */
    char **split_argv = _strtok(argv);

    _execev(split_argv);

    /* print the **split_argv for test the code only */
    printf("\ndatos en split_argv funtion execev\n");
    while (*(split_argv) != NULL)
    {
        printf("%s\n", *(split_argv));
        split_argv++;
    }

    return 0;
}
