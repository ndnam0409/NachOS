#include "syscall.h"

int main() 
{
	
	char buf[257];
	PrintString("Nhap vao mot chuoi: ");
	buf[256] = 0;
	ReadString(buf, 256);

	Halt();
	return 0;
}

