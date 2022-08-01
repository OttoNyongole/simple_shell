#include "main.h"

/**
 * prompt_user - print $ to take  user inputs
 * Return: no return
 */

void prompt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$", 2);
}
