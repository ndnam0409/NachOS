#include "syscall.h"

int main() 
{
	int n;
	PrintString("Moi ban nhap vao mot so nguyen: ");
	n= ReadInt();
	Halt();
	return 0;
}

