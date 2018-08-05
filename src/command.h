#pragma once
typedef struct command{
	char * name;
	void(*funct)(unsigned int);
} command;
command* create_command(char *str, void(*sfun)(unsigned int));
