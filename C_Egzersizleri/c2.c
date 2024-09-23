// Dışarıdan girilen bir n tam sayısına kadar olan tek tam sayıların toplamını bulan c programı.

// // // I.yol
#include <stdio.h>

int fk_toplama(int n)
{
	int sonuc = n;
	n--;
	while(n >= 0)
	{
		sonuc += n--;
	}
	n = sonuc;
	return n;
}

int main()
{
	int sayi = 5;

	printf("%d", fk_toplama(sayi));
}

// // // II.yol
#include <stdio.h>

int main()
{
	int n = 7;
	int sonuc = n;
	n--;
	
	while (n >= 0)
	{
		sonuc += n--;
	}

	printf("%d", sonuc);
}
