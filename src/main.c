#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "wchar.h"

#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#ifndef _O_U8TEXT
  #define _O_U8TEXT 0x00040000
#endif
#endif

unsigned int value;

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

void wrut(unsigned int p)
{
	wprintf(L"%lc",(wchar_t)value);
}

void wred(unsigned int p)
{
	 wchar_t emj;
	 wscanf(L"%c",&emj);
	 wprintf(L"%lc",emj);
	 wprintf(L"%lc",(wchar_t)'✒');
	 value = emj;
}

void chad(unsigned int p)
{
	 value = p;
}

int main()
{
	setlocale(LC_ALL,"cs_CZ.UTF-8");
	#ifdef _WIN32
		_setmode(_fileno(stdout), _O_U8TEXT);
	#endif

	command* commands[] = {create_command(L"write",&wrut),
			create_command(L"read",&wred),
			create_command(L"set",&chad)};


	commands[2]->funct((unsigned int)L'✒');
	commands[0]->funct(0);

	//wprintf(L"%lc",(wchar_t)L'✒')

	return 0;
}


//😂   💑  ✏  ✒
