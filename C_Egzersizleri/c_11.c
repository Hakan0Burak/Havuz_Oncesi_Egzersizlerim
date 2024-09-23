#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{   
    int tahminisayi;
    int max = 100 ;
    int min = 1;
    int cevap;
    int i;
    
    i = 1;
    srand(time(0));
    cevap = (rand() %max) +min;

    while (i)
    {
        printf("lutfen tahminizi giriniz: \n");
        scanf("%d",&tahminisayi);
        if (tahminisayi == cevap)
        {
            printf("tebrikler!!!");
            i = 0;
        }
        else if (tahminisayi >= 1 && tahminisayi <= 100)
        {
            printf("lütfen tekrar deneyin\n");
        }
        else
        {
            printf("lütfen geçerli aralıkta bir sayı giriniz");
        }
        
    }
    return 0;
}