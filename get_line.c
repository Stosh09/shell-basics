#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *line = NULL;
	size_t len = 0;

	getline(&line, &len, stdin);
	printf("The line of text is: %s\n", line);
	printf("The no of bytes of %s exc nul ptr = %ld\n", line, len);
	free(line);
	return (0);

}
