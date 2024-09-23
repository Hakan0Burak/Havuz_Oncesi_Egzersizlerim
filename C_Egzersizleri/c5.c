#include <stdio.h>
#include <math.h>

int main()
{
    double a_kenar;
    double b_kenar;
    printf("komsu dik kenarin uzunlugunu giriniz:  ");
    scanf("%lf", &a_kenar); 
    printf("karsi dik kenarin uzunluğunu giriniz:  ");
    scanf("%lf", &b_kenar);
    double kare = pow(a_kenar,2) + pow(b_kenar,2);
    printf("ucgenin hipotenusu:  %.2lf'dir",sqrt(kare));
}
