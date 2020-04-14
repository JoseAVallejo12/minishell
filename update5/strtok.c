#include "shell.h"
#define BUF_SIZE 10

/**
 * _strtok - split to string given
 * @argv: strint to toking
 * Return: new array of pointer to ponter to string
 */

char **_strtok(char *argv)
{
	char **words = NULL;
	char *word_line = argv;
	int i = 0;


	if (*argv == '\0')
		return (NULL);
	words = (char **)malloc(BUF_SIZE * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_line = strtok(argv, DELIMIT);
	while (word_line != NULL)
	{
		words[i] = _strdup(word_line);
		if (words[i] == NULL)
			return (free_dp(words));

		i++;
		/* REALLOC PUT HERE */
		word_line = strtok(NULL, DELIMIT);
	}
	words[i] = NULL;
	return (words);
}

/**
 * _realloc - moves data in pointer to new area with different space allocated
 *
 * @ptr: pointer to move data from
 * @old_size: size of current pointer
 * @new_size: size of new pointer
 * Return: returns pointer to space allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newspace;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newspace = malloc(new_size);
		if (newspace == NULL)
			return (NULL);
		return (newspace);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newspace = malloc(new_size);
	if (newspace == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		newspace[i] = ((char *)ptr)[i];
	free(ptr);
	return (newspace);
}
