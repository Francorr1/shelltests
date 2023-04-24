#include "main.h"

int main(void) 
{
    char *line;
    char **args;
    int status;

    do {
        printf("$ ");
        line = line_reader();
        args = tok(line);
        status = exec(args);

        free(line);
        free(args);
    } while (status);

    return EXIT_SUCCESS;
}