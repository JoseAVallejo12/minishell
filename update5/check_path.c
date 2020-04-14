#include "shell.h"
/**
 * check_path -function that checkout the path
 * @paths: wherever
 * @argvs: wherever
 * Return: return -1
 */
int check_path(char **env, char **argvs)
{
	int i;
	char *t = argvs[0];
	(void)t;
	char *ruta = NULL;
	DIR	 *aux;
	struct dirent *file_stat;

	char **paths = get_path(env);

	if (paths == NULL)
		return (-1);

	for (i = 0; paths[i] != NULL; i++)
	{
		aux = opendir(paths[i]);
		if (aux != NULL)
		{
			while ((file_stat = readdir(aux)) != NULL)
			{
				if (strcmp(file_stat->d_name, t) == 0)
				{
					ruta = str_concat(paths[i], file_stat->d_name);
					free(argvs[0]);
					*(argvs) = ruta;
					closedir(aux);
					free_dp(paths);
					return (0);
				}
			}
			closedir(aux);
		}
	}
	free_dp(paths);
	return (access(argvs[0], F_OK & X_OK & R_OK));
}
