#include "command.h"
#include "sampllllvm.h"
command* commands[3];

void init_commands(){
	commands[0] = create_command("write",&wrut);
	commands[1] = create_command("read",&wred);
	commands[2] = create_command("set",&chad);
}
