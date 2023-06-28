#include "syscall.h"
#include "copyright.h"
int main()
{
	char i = 32;
	PrintString("-----BANG MA ASCII------\n");
	for (; i < 127; i++)
	{
		PrintInt((int)i);
		PrintChar(':');
		PrintChar(i);
		PrintChar('\n');
	}
}
