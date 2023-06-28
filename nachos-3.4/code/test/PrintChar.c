#include "syscall.h"

int main() 
{
	
	char kytu;
	PrintString("Moi nhap 1 ky tu:");
	kytu=ReadChar();
	PrintString("Ky tu vua nhap la:");
	PrintChar(kytu);
	PrintChar('\n');

	Halt();
	return 0;
}
