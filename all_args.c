#include <stdio.h>

/**
 * main - entry point
 * print all arguments
 * Return: always 0 (Success)
 */
int main(int ac, char **av)
{
	int i;
	
	for (i = 0; i < ac; i++)
	{
		printf("Arg[%d] = %s\n", i, av[i]);
	}
	return (0);
}

