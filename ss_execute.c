#include "main.h"

/**
 * ss_execute - Check if argument is NULL
 * @args: user input.
 *
 * Return: launch command if argument != NULL
 **/

int ss_execute(char **args)
{
        if (args[0] == NULL)
        {
                return 1;
        }

        return ss_launch(args);
}
