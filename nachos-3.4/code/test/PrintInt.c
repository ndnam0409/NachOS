#include "syscall.h"

int main() 
{
	int x;
	PrintString("Nhap vao mot so nguyen: ");
	x=ReadInt();
	PrintString("So nguyen vua nhap la: ");
	PrintInt(x);
	PrintString("\n");
	Halt();
	return 0;
}
