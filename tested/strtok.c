#include "jvc.h"
#define BUF_SIZE 10

char  *filter(char *word)
{
    char *new_word = (char *)malloc(sizeof(char) * strlen(word));
    return (_strcat(new_word, word));
}
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
        words[i] = filter(word_line);
        printf("len words %lu", strlen(words[i]));
        i++;
        word_line = strtok (NULL, delimt);
    }
    free(word_line);
    word_line = NULL;
    words[i] = NULL;
    return (words);
}

