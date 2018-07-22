#include "wchar.h"
#include "stdlib.h"
typedef struct command{
	wchar_t * name;
	void(*funct)(unsigned int);
} command;
command* create_command(wchar_t *str, void(*sfun)(unsigned int))
{
	command *cmd = malloc(sizeof(command));
	cmd->name = str;
	cmd->funct = sfun;
	return cmd;
}
