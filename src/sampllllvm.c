#include "stdio.h"
#include "wchar.h"
unsigned int value;


void wrut(unsigned int p)
{
	wprintf(L"%lc",(wchar_t)value);
}

void wred(unsigned int p)
{
	 wchar_t emj;
	 wscanf(L"%lc",&emj);
	 value = emj;
}

void chad(unsigned int p)
{
	 value = p;
}
