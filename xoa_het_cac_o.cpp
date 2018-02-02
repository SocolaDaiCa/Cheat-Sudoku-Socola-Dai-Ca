void sudoku::xoa_het_cac_o()
{
	for(int i=1; i<=9; i++)
		for(int j=1; j<=9; j++){
			ma_tran[i][j]=0;
			ma_tran_cu[i][j]=0;
			gotoxy(j*4-1, i*2), cout<<" ";
		}
}
