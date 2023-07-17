#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * splitting strings using strtok
 * Return: Always 0
 */
int main(void)
{
	char str[] = "This is a string";
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}

	return (0);
}
