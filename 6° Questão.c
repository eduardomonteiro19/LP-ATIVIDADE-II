#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "portuguese");


int opcion;



printf("Insira o codigo do produto. \n");
printf("1 - Camiseta. \n");
printf("2 - Calça. \n");
printf("3 - Sapato. \n");
scanf ("%d", &opcion);

switch (opcion)
{
case 1:
   printf("Camisetas: ");
   printf("R$ 59,90");
    break;
    case 2:
   printf("Calças: ");
   printf("R$ 350,50");
    break;
    case 3:
   printf("Sapatos: ");
   printf("R$ 00,05");
    break;

default: 
printf("Opção invalida!");
    break;
}



    


    return 0;
}