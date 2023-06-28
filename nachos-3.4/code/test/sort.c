#include "syscall.h"


int main()
{
    int A[100];
    int i, j, tmp,n;
    
    PrintString("Nhap so luong phan tu: ");
    n=ReadInt();

    if(n<=0||n>100){
        PrintString("Error!\n");
        PrintString("So luong phan tu phai thuoc doan [1,100]\n");
        Halt();
        return 0;
    }
    
    //nhao vao mang can sap xep
    PrintString("Nhap mang: \n");

    for (i = 0; i < n; i++) {
        PrintString("A[");
        PrintInt(i);
        PrintString("]: ");
        A[i] = ReadInt();
    }

    //Bubble sort
    for (i = 0; i < n; i++)
        for (j = 0; j < n-i-1; j++)
    	    if (A[j] > A[j + 1]) {
        	    tmp = A[j];
        	    A[j] = A[j + 1];
        	    A[j + 1] = tmp;
        	}
    //xuat mang sau khi sap xep
    PrintString("Mang sau sap xep la: \n");
    for (i = 0; i < n; i++){
        PrintInt(A[i]);
        PrintString("  "); 
    }
    Halt();
    return 0;  
}
