#ifndef MAIN_H_
#define MAIN_H_

/* Library */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <ctype.h>

extern char **environ;

/* Prototypes*/

int execute(char *input);
char *getEnv(char *input);
char **tokenize(char *input);
void exeComd(char **argv);
char *trimInput(char *input);
int main(int argc, char **argv);


#endif
