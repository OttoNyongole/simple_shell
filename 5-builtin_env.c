#include "main.h"

/**
 * print_env - the env builtin that prints the current environmrnt
 *
 * Return: no return.
 */
void print_env(void)
{
	int x = 0;
	char **env = environ;

	while (env[x])
	{
		write(STDOUT_FILENO, (const void *)env[x], _strlen(env[x]));
		write(STDOUT_FILENO, "\n", 1);
		x++;
	}
}
