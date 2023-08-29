int fakt(int sayi){
	if (sayi<=1) return sayi;
	else return (sayi*fakt(sayi-1));
}
