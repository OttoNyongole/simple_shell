#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

#define BUFSIZE 1024
#define TOK_BUFSIZE 128
#define TOK_DELIM "\t\r\a"

/* environment variables */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
int _setenv(char **argv, lenv_s **lenv, unsigned int *execnt)
int _unsetenv(char **argv, lenv_s **lenv, unsigned int *execnt)

/* handle built ins */
int checker(char **cmd, char *buf);
void prompt_user(void);
void handle_signal(int m);
char **tokenizer(char *line);
char *test_path(char **path, char *command);
char *append_path(char *path, char *command);
int handle_builtin(char **command, char *line);
void exit_cmd(char **command, char *line);

void print_env(void);

/* string handlers */
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);
int _strcpy(char *s1, char *s2);

void execution(char *cp, char **cmd);
char *find_path(void);

/*get_line function*/
void bring_line(char **lineptr, size_t *n, char *beffer, size_t j);
ssize_t get_line(char **lineptr, size_t *n, FILE *stream);

/* helper function for efficient free */
void free_buffers(char **buf);

struct builtin
{
	char *env;
	char *exit;
} builtin;

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

#endif
