#include "syscall.h"
#include "copyright.h"

void main()
{
	// Khai bao
	int f_Success; // Bien co dung de kiem tra thanh cong
	SpaceId si_sinhvien, si_voinuoc;	// Bien id cho file
	char c_readFile;	// Bien ki tu luu ki tu doc tu file
	int flag_VN;		// Bien co de nhay den tien trinh voinuoc
	int flag_MAIN;		// Bien co de nhay den tien trinh main
	int lengthFile;		// Luu do dai file
	int i_File;		// Luu con tro file
	//-----------------------------------------------------------
	Signal("m_vn");	
	// Tao file result.txt de ghi voi nao su dung
	f_Success = CreateFile("result.txt");
	if (f_Success == -1)
   	{
        	Signal("main"); // tro ve tien trinh chinh
        	return;
    	}
	//VONG WHILE 1
	while(1)
	{
		lengthFile = 0;

		Wait("sinhvien");
		

		// Tao file result.txt de ghi voi nao su dung
		f_Success = CreateFile("result.txt");
		if(f_Success == -1)
		{
			Signal("main"); // tro ve tien trinh chinh
			return;
		}

		// Mo file sinhvien.txt len de doc
		si_sinhvien = Open("sinhvien.txt", 1);
		if(si_sinhvien == -1)
		{
			Signal("main"); // tro ve tien trinh chinh
			return;
		}
		
		lengthFile = Seek(-1, si_sinhvien);
		Seek(0, si_sinhvien);
		i_File = 0;
	
		// Tao file voinuoc.txt
		f_Success = CreateFile("voinuoc.txt");
		if(f_Success == -1)
		{
			Close(si_sinhvien);
			Signal("main"); // tro ve tien trinh chinh
			return;
		}
		

		// Mo file voinuoc.txt de ghi tung dung tich nuoc cua sinhvien
		si_voinuoc = Open("voinuoc.txt", 0);
		if(si_voinuoc == -1)
		{
			Close(si_sinhvien);
			Signal("main"); // tro ve tien trinh chinh
			return;
		}
		
		// VONG WHILE 2
		// Ghi dung tich vao file voinuoc.txt tu file sinhvien.txt
		while(i_File < lengthFile)
		{
			flag_VN = 0;
			Read(&c_readFile, 1, si_sinhvien);
			if(c_readFile != ' ')
			{
				Write(&c_readFile, 1, si_voinuoc);
			}
			else
			{
				flag_VN = 1;
			}
			if(i_File == lengthFile - 1)
			{
				Write("*", 1, si_voinuoc);
				flag_VN = 1;
			}
			
				
			if(flag_VN == 1)
			{
				Close(si_voinuoc);
				Signal("voinuoc");
				// Dung chuong trinh sinhvien lai de voinuoc thuc thi
				Wait("sinhvien");
				
				// Tao file voinuoc.txt
				f_Success = CreateFile("voinuoc.txt");
				if(f_Success == -1)
				{
					Close(si_sinhvien);
					Signal("main"); // tro ve tien trinh chinh
					return;
				}
		

				// Mo file voinuoc.txt de ghi tung dung tich nuoc cua sinhvien
				si_voinuoc = Open("voinuoc.txt", 0);
				if(si_voinuoc == -1)
				{
					Close(si_sinhvien);
					Signal("main"); // tro ve tien trinh chinh
					return;
				}
				
			}
			i_File++;							
		}
		// KET THUC VONG WHILE 2				
		// Ket thuc tien trinh sinhvien va voinuoc quay lai ham SvVn
		Close(si_sinhvien);
		Signal("main");			
	}
	// KET THUC VONG WHILE 1
	// Quay lai ham Svvn	
}
