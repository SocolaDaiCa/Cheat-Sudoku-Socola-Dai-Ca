void sudoku::hien_khung()
{
	int hang=9*2+1, cot=9*4+1; // bat dau tu 1
	for(int i=1; i<=hang; i++)
		for(int j=1; j<=cot; j++)
		{
			gotoxy(j, i);
			if( i==1 && j==1 ) 		cout<<char(201);	else	// goc tren trai
			if( i==1 && j==cot ) 	cout<<char(187);	else	// goc tren phai
			if( i==hang && j==1 ) 	cout<<char(200);	else	// goc duoi trai
			if( i==hang && j==cot ) cout<<char(188);	else	// goc duoi phai
			if( i==1 && j%12==1 ) 	cout<<char(203);	else	// nga re tren moi 3 o
			if( i==hang && j%12==1 )cout<<char(202);	else	// nga re duoi moi 3 o
			if( i%6==1 && j==1 ) 	cout<<char(204);	else	// nga re trai moi 3 o
			if( i%6==1 && j==cot ) 	cout<<char(185);	else	// nga re phai moi 3 o
			if( i%6==1 && j%12==1 ) cout<<char(206);	else	// dau cong	   moi 3 o
			if( i%6==1 ) 			cout<<char(205);	else	// thanh ngang moi 3 o
			if( j%12==1 ) 			cout<<char(186);	else	// thanh doc moi 3 o
			
			if( i%2==1 && j%4==1 ) 	cout<<char(197);	else	// dau cong moi 1 o
			if( i%2==1 ) 			cout<<char(196);	else	// thanh ngang moi 1 o
			if( j%4==1 ) 			cout<<char(179);	else	// thanh doc moi 1 o
				cout<<" ";
		}
	int le_tren=2, le_trai=cot+2;
	gotoxy(le_trai, le_tren++),	cout<<"Control: "<<char(27)<<char(18)<<char(26);
	gotoxy(le_trai, le_tren++),	cout<<"Cheat: Enter";
	gotoxy(le_trai, le_tren++),	cout<<"Clean: Esc";
	gotoxy(1, 20), cout<<"Code by: Socola Dai Ca";
	gotoxy(3, 2), SetColor();
}
