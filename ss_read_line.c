#include "main.h"

/**
 * ss_read_line - Read input from user.
 *
 * Return: The line obtained from the stdin
 **/

char *ss_read_line(void)
{
        char *line = NULL;
        size_t bufsize = 0; /*getline allocate mem*/

        if (getline(&line, &bufsize, stdin) == -1)
        {
                if (feof(stdin))
                {
                        exit(EXIT_SUCCESS);  /*EOF*/
                }
                else
                {
                        perror("readline");
                        exit(EXIT_FAILURE);
                }
        }

        return line;
}

