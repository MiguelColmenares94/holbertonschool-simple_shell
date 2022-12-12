#include "main.h"

/**
 * ss_loop - Infinite loop for shell.
 *
 * Return: void
 **/

void ss_loop(void)
{
        char *line;
        char **args;
        int status;

        do
        {
                printf("simple_shell> ");
                line = ss_read_line();
                args = ss_split_line(line);
                status = ss_execute(args);

        free(line);
        free(args);
        } while (status);
}

