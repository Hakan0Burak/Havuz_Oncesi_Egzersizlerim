#include <stdio.h>
#include <math.h>

float main()
{
    const double PI = 3.14;
    double yaricap;
    double alan;
    double cevre;

    printf("dairenin yaricapini giriniz:  ");
    scanf("%lf" , &yaricap);

    alan = pow(yaricap,2) * PI;
    cevre = 2 * PI * yaricap;

    printf("dairenin alani: %.2lf\n",alan);
    printf("dairenin cevresi: %.2lf",cevre);

    return 0;
}