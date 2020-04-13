#include "shell.h"
/**
 *
 */

int nomain(int ac, char **av, char **env)
{

	(void)ac;
	(void)av;
	(void)env;

	char *str_line = _getlines(env);
	printf("%s", str_line);

	free(str_line);
//	int status = 0;
	/* start test for getline.c and strtok.c */
	/*initiate_shell();
	do	{
		prompt_shell();
		char *str_line = _getlines(env);
		//printf("%s", str_line);
		char **test = _strtok(str_line);
		char *p = NULL;


		int i = 0;
		while (test[i] != NULL)
		{
			p = test[i];
			printf("%s\n", p);
			i++;
		}
		free(str_line);
		test = free_dp(test);
	}	while (status != 1);
*/
	/* start test for get_path.c*/
/*	char **test = get_path(env);
	if (test == NULL)
		return (0);
	char *p;
 
	int i = 0;

	while (test[i] != NULL)
	{
		p = test[i];
		printf("%s\n", p);
		i++;
	}
	free(str_line);
	test = free_dp(test);
*/	/*end test get_path */
	return (0);
}
