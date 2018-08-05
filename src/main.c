//standard includes
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "wchar.h"
#include "string.h"

//custom includes
#include "command.h"
#include "sampllllvm.h"
#include "commands.h"
#include "reader.h"

//Def UTF-8
#ifdef _WIN32
 #include "io.h"
 #include "fcntl.h"
 #ifndef _O_U8TEXT
  #define _O_U8TEXT 0x00040000
 #endif
#endif

char route[] = "C:\\Users\\Johny\\Desktop\\test.txt";

int main()
{
	setbuf(stdout, NULL);
	#ifdef linux
		setlocale(LC_ALL,"cs_CZ.UTF-8");
	#endif
	#ifdef _WIN32
		//_setmode(_fileno(stdout), _O_U8TEXT);
		//_setmode(_fileno(stdin), _O_U8TEXT);
	#endif
	init_commands();

	//commands[2]->funct((unsigned int)"📁");
	commands[1]->funct(0);
	commands[0]->funct(0);

	return 0;
}
