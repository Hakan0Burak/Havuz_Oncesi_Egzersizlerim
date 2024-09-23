#include <stdio.h>

int main()
{
    char operator;
    double sayi1;
    double sayi2;
    double sonuc;

    printf("\n hangi operatoru kullanmak istiyorsun (+ - * /):  ");
    scanf("%c",&operator);
    printf("\n lutfen 1.sayiyi giriniz:  ");
    scanf("%lf",&sayi1);
    printf("\n lutfen 2.sayiyi giriniz:  ");
    scanf("%lf",&sayi2);

    switch(operator){
        case '+':
        sonuc =(sayi1 + sayi2);
        printf("yaptiginiz toplama isleminin sonucu:  %.1lf",sonuc);
        break;

        case '-':
        sonuc =(sayi1 - sayi2);
        printf("yaptiginiz cikarma isleminin sonucu:  %.1lf",sonuc);
        break;
        
        case '*':
        sonuc =(sayi1 * sayi2);
        printf("yaptiginiz carpma isleminin sonucu:  %.1lf",sonuc);
        break;

        case '/':
        sonuc =(sayi1 / sayi2);
        printf("yaptiginiz bolme isleminin sonucu:  %.2lf",sonuc);
        break;
        
        default:
        printf("gecerli bir operator giriniz! ");
        break;
    }



}