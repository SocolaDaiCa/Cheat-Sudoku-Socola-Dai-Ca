bool sudoku::kiem_tra_de_bai()
{
	// kiem tra 1 gia tri xuat hien 2 lan trên 1 hàng 1 côt hoac luoi 9 o
	for(int i=1; i<=9; i++)
	{
		for(int j=1; j<=9; j++)
		{
			if(ma_tran[i][j]!=0)
			{
				// kiem tra theo hang
				for(int c = 1; c <= 9; c++)
					if( c != j && ma_tran[i][j] == ma_tran[i][c] )
						return false;
				// kiem tra theo cot
				for(int h=1; h<=9; h++)
					if(h!=i && ma_tran[i][j]==ma_tran[h][j])
						return false;
				// kiem tra theo luoi o 9
				for (int h = (i - 1) / 3 * 3 + 1; h <= (i-1) / 3 * 3 + 3; h++)
					for (int c = (j - 1) / 3 * 3 + 1; c <= (j - 1) / 3 * 3 + 3; c++)
						if ( ( i!=h && j!=c) && ma_tran[i][j] == ma_tran[h][c])
							return false;
			}
		}
	}
	// kiem tra de bai k the giai
	bool co_hoi1[10][10][10];
	for(int i=1; i<=9; i++)
		for(int j=1; j<=9; j++)
			for(int k=1; k<=9; k++)
				co_hoi1[i][j][k] = 1;
	// duyet
	for(int i=1; i<=9; i++)
		for(int j=1; j<=9; j++)
			if(ma_tran[i][j]) //neu da co gia tri
			{
				for(int k = 1; k <= 9; k++){
					if(k != j){
						co_hoi1[i][k][ ma_tran[i][j] ] = 0;
					}
					if(k != i){
						co_hoi1[k][j][ ma_tran[i][j] ] = 0;
					}
					// tinh co hoi theo luoi o 9 chua viet :v
				}
			}
//	int dem;
//	for(int i = 1; i<=9; i++){
//		for(int j = 1; j<=9; j++){
//			dem = 9;
//			for(int k = 1; k <= 9; k++){
//				if(co_hoi1[i][j][k] == 0){
//					dem--;
//				}
//			}
//			if(dem == 0) return false;
//		}
//	}
	return true;
}
