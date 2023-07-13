#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * gets process of id
 * Return: Always 0 (Success)
 */
int main(void)
{
	pid_t process_id;

	process_id = getpid();
	printf("Current process_id = %d\n", process_id);
	return (0);
}
