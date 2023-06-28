#include "syscall.h"
#include "copyright.h"
int main()
{
    PrintString("Team member information:\n");
    PrintString("20120092 - Tran Huy Hoang\n");
    PrintString("20120099 - Tran Huynh Huong\n");
    PrintString("20120140 - Nguyen Dang Nam\n");
    PrintString("20120145 - Duong Yen Ngoc\n");
    PrintString("20120292 - Pham Quoc Hung\n");
    PrintString("\nMo ta van tat ve chuong trinh sort va ascii:\n");
    PrintString("1. sort: Chuong trinh nay cho phep nguoi dung nhap vao mot mang n so nguyen "
    "voi n la so do nguoi dung nhap vao (n<=100). Su dung thuat toan bubble sort de sap xep "
    "mang tren theo chieu tang dan hoac giam dan tuy vao nguoi dung lua chon.\n"
    );
    PrintString("2. ascii: Chuong trinh in ra bang ma ascii (bat buoc phai in cac ki tu doc duoc," 
    " cac ma ky tu khong doc duoc khong can phai in ra).\n");
    Halt();
}
