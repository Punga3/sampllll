#include "stdio.h"
#include "wchar.h"
unsigned int value;

void wrut(unsigned int p) //📁
{
	printf((char *)value);
}

void wred(unsigned int p) //✏
{
	 char emj[255];
	 scanf("%s",emj);
	 value = (unsigned int)emj;
}

void chad(unsigned int p) //✒
{
	 value = p;
}
