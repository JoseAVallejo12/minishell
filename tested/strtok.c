#include "jvc.h"
#define BUF_SIZE 1024
/**
 *
 */

char **_strtok(char *argv)
{
    char **words = NULL;
    char *word_line = argv;
    char *delimt = " ";
    int i = 0;

    words = (char **)malloc(BUF_SIZE * sizeof(char *));
    if (words == NULL)
        return (NULL);
    strtok(word_line, delimt);

    while(word_line != NULL)
    {
        words[i] = word_line;
        printf("\narg %d %s", i, words[i]);
        i++;
        word_line = strtok (NULL, delimt);
    }
    words[i] = NULL;
    return (words);
}

