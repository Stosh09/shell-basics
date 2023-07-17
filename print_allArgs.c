#include <stdio.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: the arguments
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	int i;

	for (i = 0; av[i] != NULL; i++)
	{
		printf("Argv[%d] = %s\n", i, av[i]);
	}
	return (0);
}
