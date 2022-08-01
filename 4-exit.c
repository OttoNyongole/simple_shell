#include "main.h"

/**
 * exit_cmd - handle the exit command
 * @command: command tokenized
 * @line: input read from stdin
 * Return: No return
 */
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
