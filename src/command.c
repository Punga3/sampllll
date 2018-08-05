#include "stdlib.h"

typedef struct command{
	char * name;
	void(*funct)(unsigned int);
} command;
command* create_command(char *str, void(*sfun)(unsigned int))
{
	command *cmd = malloc(sizeof(command));
	cmd->name = str;
	cmd->funct = sfun;
	return cmd;
}
