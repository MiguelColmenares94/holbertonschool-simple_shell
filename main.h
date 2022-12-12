#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>

void ss_loop(void);
char *ss_read_line(void);
char **ss_split_line(char *line);
int ss_launch(char **args);
int ss_execute(char **args);

#endif

