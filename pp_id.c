#include <stdio.h>
#include <unistd.h>
/**
 * main- entry point
 * get parent process id
 * Return: Always 0 (Success)
 */
int main(void)
{
	pid_t parent_id;
	parent_id = getppid();
	printf("parent id = %d\n", parent_id);
	return (0);

}
