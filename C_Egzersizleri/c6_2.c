#include <stdio.h>

int main()
{
    int num1;
    int num2;
    char operator;
    int answer;
    
    printf("lütfen islem yapmak istediginiz operatoru giriniz: ");
    scanf("%c",&operator);
    printf("lütfen islem yapmak istediginiz 1.sayiyi giriniz: "); 
    scanf("%d",&num1);
    printf("lütfen islem yapmak istediginiz 2.sayiyi giriniz: "); 
    scanf("%d",&num2);

    if(operator == '+')
        answer = (num1 + num2);
    else if(operator == '+')
        answer = (num1 + num2);
    else if(operator == '*')
        answer = (num1 * num2);
    else if(operator == '/')
        answer = (num1 / num2);
    else
        answer = (num1 - num2);
    printf("%d", answer);
    return 0; 
}