#include "shell.h"

/* FUNCION MENSAJE INICIAL*/
void initiate_shell(void)
{
	CLEAR_SCREEN;
	write(STDOUT, "****************************", 28);
	NEW_LINE;
	write(STDOUT, "*         Mini_Shell  *", 21);
	NEW_LINE;
	write(STDOUT, "*  by: Jose Vallejo Contreras  *", 30);
	NEW_LINE;
    write(STDOUT, "*  by: Esteban De La hoz 7u7   *", 30);
	NEW_LINE;
	write(STDOUT, "****************************", 28);
	NEW_LINE;
}

