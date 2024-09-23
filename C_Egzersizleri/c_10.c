#include <stdio.h>

void sort(int sayi[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (sayi[j] > sayi[j + 1])
            {
                int temp = sayi[j];
                sayi[j] = sayi[j + 1];
                sayi[j + 1] = temp;
            }
        }
    }
}

void printsayi(int sayi[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", sayi[i]);
    printf("\n");
}

int main()
{
    int sayi[] = {9, 8, 4, 3, 2, 1, 5, 6, 7};
    int size = sizeof(sayi) / sizeof(sayi[0]);
    sort(sayi, size);
    printsayi(sayi, size);

    return 0;
}