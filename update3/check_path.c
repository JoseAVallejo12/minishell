#include "shell.h"

/**
 * *
 * *
 */

int check_path(char **paths, char **argvs)
{
	int i;
	char *t = argvs[0];
	(void)t;
	char *ruta = NULL;
	DIR	 *aux;
	//char *temp = NULL;
	struct dirent *file_stat;
	
//	aux = access(argvs[0]);
	if (access(argvs[0], F_OK & X_OK & R_OK) != 0)
	{
		for (i = 0; paths[i] != NULL; i++)
		{
			/* open directory and check if is done */
			//printf("*******************************0\n");
			//printf("DIRECTORIO == %s\n", paths[i]);
			//printf("*******************************0\n");
			aux = opendir(paths[i]);
			if (aux != NULL)
			{
				while ((file_stat = readdir(aux)) != NULL) 
				{
					//printf("d_name %s == %s\n", file_stat->d_name, t);
					if (strcmp(file_stat->d_name, t) == 0)
					{
						//printf("\n*****MATCH FOUND******\n");
						ruta = str_concat(paths[i], file_stat->d_name);
						free(argvs[0]);
						*(argvs) = ruta;
						closedir(aux);
						return (0);
					}
				}
				closedir(aux);
			}
		}
	}
	else
	{
		return (0);
	}

	return (-1);
}
