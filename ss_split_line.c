#include "main.h"
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\a\v\n"

/**
 * ss_split_line - Split input string into individual tokens.
 * @line: user input.
 *
 * Return: user input separated in individual tokens.
 **/

char **ss_split_line(char *line)
{
        int bufsize = LSH_TOK_BUFSIZE, position = 0;
        char **tokens = malloc(bufsize * sizeof(char*));
        char *token;

        if (!tokens)
        {
                fprintf(stderr, "simple_shell: allocation error\n");
                exit(EXIT_FAILURE);
        }

        token = strtok(line, LSH_TOK_DELIM);

        while (token != NULL)
        {
        tokens[position] = token;
        position++;
                if (position >= bufsize)
                {
                bufsize += LSH_TOK_BUFSIZE;
                tokens = realloc(tokens, bufsize * sizeof(char*));
                        if (!tokens)
                        {
                                fprintf(stderr, "simple_shell: allocation error\n");
                                exit(EXIT_FAILURE);
                        }
                }

        token = strtok(NULL, LSH_TOK_DELIM);
        }

        tokens[position] = NULL;
        return tokens;
}

