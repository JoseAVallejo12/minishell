#include "shell.h"

/* FUNCION MENSAJE PROMPT*/
void prompt_shell(void)
{
	//write(STDOUT, "$", 1);
	write(STDOUT, "\033[1;31mMi_shell/user@root$ ", 32);
	write(STDOUT, "\033[0m", 4);
}



