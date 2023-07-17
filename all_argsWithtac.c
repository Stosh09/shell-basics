#include "stdio.h"
#include <stdarg.h>
void print_arguments(int argc, ...);

/**
 * main - entry point
 * @ac: argument count
 * @av: arguments
 * print all args with ac
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	(void)ac;

	print_arguments(3, "hello", "world", "!");
	return (0);
}
/**
 * print_arguments - prints all args
 * @argc: argument count
 * Return: void
 */
void print_arguments(int argc, ...)
{
	int i = 0;
	va_list arguments;

	va_start(arguments, argc);
	for (; i < argc; i++)
	{
		printf("%s\n", va_arg(arguments, char*));
	}
	va_end(arguments);
}
