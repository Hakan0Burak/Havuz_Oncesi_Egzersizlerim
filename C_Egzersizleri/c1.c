//Yarı çapı dışardan girilen bir dairenin çevresini ve alanını bulan c programı.

// // // I.yol
#include <stdio.h>

int fk_cevre(int i)
{
    double sonuc = 0;
    double pi = 3.14;
    sonuc = 2 * pi * i;
    return sonuc;
}
int fk_alan(int i)
{
    double sonuc = 0;
    double pi = 3.14;
    sonuc = pi * i * i;
    return sonuc;
}
int main()
{
    int sayi = 7;

    printf("cemberin alani : %d\n",fk_cevre(sayi));
    printf("cemberin cevresi : %d",fk_alan(sayi));
}

// // // II.yol
#include <stdio.h>

int main()
{
    double r = 7;
    double pi = 3.14;

    double cevre = (pi * r * 2); 
    double alan = (pi * r * r);

    printf("cemberin cevresi: %.2f\n", cevre);
    printf("cemberin alanı: %.2f", alan);

}
