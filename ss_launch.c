#include "main.h"

/**
 * ss_launch - Launch command
 * @args: command from user input.
 *
 * Return: 1 if Success.
 **/

int ss_launch(char **args)
{
        extern char **environ;
        pid_t pid, wpid;
        int status;
        char *binpath = "/bin/";
        char *filepath;

        pid = fork();

        filepath = malloc(sizeof(char) * 1024);
        strcpy(filepath, binpath);
        strcat(filepath, args[0]);
        strcat(filepath, "\0");

	if (pid == 0)
        {
        // Child process
                if (execve(filepath, args, environ) == -1)
                {
                        perror("simple_shell");
                }
        exit(EXIT_FAILURE);
        }
        else if (pid < 0)
        {
        // Error forking
        perror("simple_shell");
        }
        else
        {
        // Parent process
        do {
                wpid = waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
        }

        free(filepath);

        return 1;
}

