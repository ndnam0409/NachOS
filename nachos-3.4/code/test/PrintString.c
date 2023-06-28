#include "syscall.h"

int main() 
{
	char buf[257];
	buf[256] = 0;
	PrintString("Nhap vao mot chuoi: ");
	ReadString(buf,256);
	PrintString("Chuoi vua nhap la: ");
	PrintString(buf);
	PrintString("\n");

	Halt();
	return 0;
}
