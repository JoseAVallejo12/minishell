#include "jvc.h"

int main ()
{
    int status = 0;

    while (status == 0) {

        /* get the input the command line */
        char *argv = _getlines();
        /* split the input line with strtok funtion and return 2d ponter */
        char **split_argv = _strtok(argv);
        status = _execev(split_argv);

    }

    return 0;
}
