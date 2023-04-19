#include "main.h"
/**
 *
*/
int main(void)
{
	char *prompt = "$> ";
	char *lineptr;
	size_t n = 0;
	ssize_t charsread;

	system("clear");

	while (1)
	{
		printf("%s", prompt);
		charsread = getline(&lineptr, &n, stdin);
		if (charsread == -1)
		{
			printf("Exiting...\n");
			return (-1);
		}
		printf("You said %s", lineptr);
	}

	free(lineptr);
	return (0);
}
