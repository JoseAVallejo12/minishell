#include "jvc.h"

int main ()
{
    int status = 0;

    while (status != EOF) {

        /* get the input the command line */
        char *argv = _getlines();
        /* split the input line with strtok funtion and return 2d ponter */
        char **split_argv = _strtok(argv);
        /* check split_argv[0] for there is an bult-in funtion */
        /* -----CALL FUNTION FOR BULT-IN FUNTIONS----- */

        /* call the funtion for executing external funtions with exec */
        status = _execev(split_argv);
    }
    return 0;
}
