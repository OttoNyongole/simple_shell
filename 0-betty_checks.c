#include "main.h"
/**
 * checker - checks wheather its a built in function.
 * @cmd: tokenized user input.
 * @buf: line drived frm get line function
 * Return: 1 if cmd executed 0 if not.
 */
int checker(char **cmd, char *buf)
{
	if (handle_builtin(cmd, buf))
		return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}
