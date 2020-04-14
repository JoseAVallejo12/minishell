#include "shell.h"

/**
 * free_dp - free memory allocated in double ponter
 * @dp: double pointer var
 * Return: alway NULL
 */

char **free_dp(char **dp)
{
	int i = 0;

	while (dp[i] != NULL)
	{
		free(dp[i]);
		i++;
	}
	free(dp);
	dp = NULL;
	return (NULL);
}

