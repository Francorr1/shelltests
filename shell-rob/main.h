#ifndef shell_h
#define shell_h
#define BUFFER_SIZE 1024
#define TOK_DELIMITER “ \t\r\n\a”

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

char **tok_line(char *line);
int exec(char **args);
char *line_reader(void);
int main(void);

#endif
