#include <stdio.h>
#include <string.h>

int main()
{
   char games[][15] ={"valorant","tft","lol","csgo"};
   for (int i = 0 ; i< sizeof(games)/sizeof(games[0]);i++)
      printf("%s\n",games[i]);
   return 0;
}