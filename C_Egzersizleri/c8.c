#include <stdio.h>

int main()
{
   int ages[] = {18,20,25,30,35,40};
   
   for(int i = 0 ; i < sizeof(ages)/sizeof(ages[0]);i++)
      printf("%d\n",ages[i]);
   
   return 0;
}