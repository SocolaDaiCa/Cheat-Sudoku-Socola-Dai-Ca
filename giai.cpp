int co_hoi = 1, thanh_cong = 0, dem=0;
void hien_ma_tran(int **ma_tran)
{
	int i, j;
	for (i = 1; i <= 9; i++)
		for (j = 1; j <= 9; j++)
		{
			gotoxy(j*4-1, i*2);
			if(ma_tran[i][j]==ma_tran_cu[i][j])
				SetColor(mau_chu);
			cout<<ma_tran[i][j];
			SetColor();
		}
}
bool kiem_tra_gia_tri_vua_nhap(int **ma_tran, int hang, int cot, int gia_tri)
{
	int i, j;
	// kiem tra theo hàng
	for (j = 1; j <= 9; j++)
		if (ma_tran[hang][j] == gia_tri)
			return false;
	// kiem tra theo cot
	for (i = 1; i <= 9; i++)
		if (ma_tran[i][cot] == gia_tri)
			return false;
	// ki?m tra theo luoi ô 9
	for (i = (hang - 1) / 3 * 3 + 1; i <= (hang-1) / 3 * 3 + 3; i++)
		for (j = (cot - 1) / 3 * 3 + 1; j <= (cot - 1) / 3 * 3 + 3; j++)
			if (ma_tran[i][j] == gia_tri)
				return false;
	return true;
}
void giai(int **ma_tran, int hang, int cot)
{
	if (co_hoi == 1)
	{
		if (cot > 9)
			cot -= 9,	hang += 1;
		if ((hang - 1) * 9 + cot <= 81)
		{
			if (ma_tran[hang][cot] == 0)
			{
				for (int i = 1; i <= 9; i++)
				{
					if(kiem_tra_gia_tri_vua_nhap(ma_tran, hang, cot, i))
					{
						ma_tran[hang][cot] = i;
						giai(ma_tran, hang, cot + 1);
						ma_tran[hang][cot] = 0;
					}
				}
			}
			else
				giai(ma_tran, hang, cot + 1);				
		}
		else
		{
			if(thanh_cong==0)
				hien_ma_tran(ma_tran);
			co_hoi = 0;
			thanh_cong = 1;
		}
	}
}
