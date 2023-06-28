#include "syscall.h"

int main() 
{
	char c;
	PrintString("Nhap vao mot ky tu: ");
	c = ReadChar();
	Halt();
	return 0;
}

