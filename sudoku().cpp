sudoku::sudoku()
{
	ma_tran=new int*[10];
	for(int i=1; i<=9; i++)
		ma_tran[i]= new int [10];
		
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			ma_tran[i][j]=0;
			ma_tran_cu[i][j]=0;
		}
	}
}
