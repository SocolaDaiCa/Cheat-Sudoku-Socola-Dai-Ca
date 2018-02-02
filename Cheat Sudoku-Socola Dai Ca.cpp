#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
int mau_chu=10;
int ma_tran_cu[10][10];
#include"console.cpp"
#include"giai.cpp"
class sudoku
{
	private:
		int phim, x=1, y=1, gia_tri;
		int i, j, k, h, c;
		int **ma_tran;
	public:
		sudoku();
		void nhan_phim();
		void hien_khung();
		void nhap_gia_tri();
		void xoa_het_cac_o();		
		bool kiem_tra_de_bai();
		void giai_sudoku(){	co_hoi=1, thanh_cong=0, giai(ma_tran, 1, 1);	}
};
#include"sudoku().cpp"
#include"nhap_phim.cpp"
#include"hien_khung.cpp"
#include"nhap_gia_tri.cpp"
#include"xoa_het_cac_o.cpp"
#include"kiem_tra_de_bai.cpp"
int main()
{
//	SetFontSize(10, 18);
//	SetWindow(52, 25);
//	SetConsoleTitle(TEXT("Cheat Sudoku-Socola Dai Ca"));
//	sudoku run;
//	run.hien_khung();
//	while(true)
//		if(kbhit())
//			run.nhan_phim();
	for(int i = 1; i<=255; i++){
		cout<<i<<" "<<char(i)<<endl;
	}
}
