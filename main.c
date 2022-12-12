#include "main.h"

/**
 * main - Infinite loop for shell.
 *
 * Return: 0
 **/

int main(int argc, char **argv)
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

	return EXIT_SUCCESS;
}

