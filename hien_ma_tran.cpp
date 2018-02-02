void hien_ma_tran(int **ma_tran)
{
//	gotoxy(0, 15);
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
				//gotoxy(j*4-1, i*2);
			cout<<ma_tran[i][j]<<"X";
		}
		cout<<endl<<"y";
	}
}
