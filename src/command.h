#pragma once
#include "wchar.h"
typedef struct command{
	wchar_t * name;
	void(*funct)(unsigned int);
} command;
command* create_command(wchar_t *str, void(*sfun)(unsigned int));
