#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *lines[255];
unsigned int array_size = 0;

void read_file_code(char route[])
{
    FILE * file;
    char *line = malloc(255);
    size_t length = 0;
    ssize_t read;
    array_size = 0;

    file = fopen(route, "r");

    while ((read = getline(&line, &length, file)) != -1) {
    	lines[array_size] = line;
    	printf("%s",lines[array_size]);
    	array_size++;
    }

    printf("\n");
    fclose(file);
}

void display_file_code()
{
	for(int i = 0; i < array_size; i++)
	{
		printf("\n%d ",i);
		printf("%s",lines[i]);
	}
}
