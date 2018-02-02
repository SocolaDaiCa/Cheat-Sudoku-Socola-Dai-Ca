void sudoku::nhap_gia_tri()
{
	gia_tri=phim-48;
	SetColor(mau_chu), cout<<gia_tri;
	SetColor();
	ma_tran[y][x]=gia_tri;
	ma_tran_cu[y][x]=gia_tri;
}
