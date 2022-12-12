#include "main.h"

/**
 * ss_read_line - Read input from user.
 *
 * Return: The line obtained from the stdin
 **/

char *ss_read_line(void)
{
        char *line = NULL;
        ssize_t bufsize = 0; // have getline allocate a buffer for us

        if (getline(&line, &bufsize, stdin) == -1)
        {
                if (feof(stdin))
                {
                        exit(EXIT_SUCCESS);  // We recieved an EOF
                }
                else
                {
                        perror("readline");
                        exit(EXIT_FAILURE);
                }
        }

        return line;
}

