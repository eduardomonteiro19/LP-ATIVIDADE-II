#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int x;
    int i;

    printf("digite um numero:\n");
    scanf("%d",&x);

    for ( i = x ; i >= 0; i--)
    {
        printf("%d \n",i);
    }
    
    switch (i)
    {
    case 10:
    printf("faltam 10 segundos\n");
        break;
    case 20:
    printf("faltam 20 segundos\n");
        break;
    case 30:
    printf("faltam 30 segundos\n");
        break;
    case 40:
    printf("faltam 40 segundos\n");
        break;
    case 50:
    printf("faltam 50 segundos\n");
        break;
    case 60:
    printf("faltam 60 segundos\n");
        break;
    case 70:
    printf("faltam 70 segundos\n");
        break;
    
    default:
        break;
    }

return 0; 
}