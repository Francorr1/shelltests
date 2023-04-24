#include “main.h”
/*
*
*/
char *line_reader(void)
{
	char *line = NULL;
	ssize_t bufsize = 0;
	getline(&line, &bufsize, stdin);
	return line;
}
