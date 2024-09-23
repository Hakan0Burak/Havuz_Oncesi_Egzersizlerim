#include <stdio.h>

int main()
{
 char unit;
 float temp;

 printf("Kullandiginiz sicaklik birimini giriniz (C),(F):  ");
 scanf("%c",&unit);

 if(unit == 'C'){
    printf("sicakligin kac oldugunu yaziniz:  ");
    scanf("%f",&temp);
    temp = (temp * 9/5) + 32;
    printf("sicaklik degerin fahrenheit cinsinden: %.1f'dir.",temp);
    }
 else if (unit == 'F'){
    printf("sicakligin kac oldugunu yaziniz:  ");
    scanf("%f",&temp);
    temp = ((temp-32)*5)/9;
    printf("sicaklik degerin celsius cinsinden: %.1f'dir.",temp);
    }


 else{
    printf("gecerli bir sicaklik birimi giriniz ");
    }


 return 0;

}
