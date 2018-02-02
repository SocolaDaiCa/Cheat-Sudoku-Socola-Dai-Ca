#define len 72
#define xuong 80
#define trai 75
#define phai 77
#define enter 13
#define Backspace 8
#define Esc 27
void sudoku::nhan_phim()
{
	phim=getch();
	gotoxy(0,0), cout<<"               ";
	gotoxy(x*4-1, y*2);
	switch(phim) 
	{
		case enter:
			if( kiem_tra_de_bai() )
			{
				giai_sudoku();
				if(!thanh_cong)
					gotoxy(0,0), cout<<" khong the giai";
			}
			else
				gotoxy(0,0), cout<<"Khong the giai hoac de bai khong hop le.";
		break;
		case Backspace: 
			cout<<" ";
			ma_tran[y][x]=0, ma_tran_cu[y][x]=0;
			break;
		case Esc: xoa_het_cac_o(); break;
		case len:	y--;	break;
		case xuong:	y++;	break;
		case trai:	x--;	break;
		case phai:	x++;	break;
		default:
			if(49<=phim && phim<=57)
				nhap_gia_tri();
	}
	if(x>9)	x-=9;
	if(x<1)	x+=9;
	if(y>9)	y-=9;
	if(y<1)	y+=9;
	gotoxy(x*4-1, y*2);
}
