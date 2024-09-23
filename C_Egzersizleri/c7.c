#include <stdio.h>
int main()
{
    int satir;
    int sutun;
    char sembol;
    
    printf("lutfen satir sayisi giriniz: ");
    scanf("%d", &satir);

    printf("lutfen sutun sayisi giriniz: ");
    scanf("%d",&sutun);
    
        for (int i = 1 ; i <=satir; i++)
    {
        printf("%c",&sembol);

        for (int j = 1; j < sutun; j++)
            printf("%c",&sembol);
    
        printf("\n");
    }
    return 0;
}