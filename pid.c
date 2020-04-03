#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid, my_ppid;

	my_ppid = getppid();
	my_pid = getpid();
	printf("paren proces id%u\n", my_ppid);
	printf("chill proces id%u\n", my_pid);
	return (0);
}
