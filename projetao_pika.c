#include<conio.h>
#include <stdlib.h>
#include<stdio.h>


void menu (void)


{
    int tecla;
while(1)
{
if(kbhit())
{
tecla=getch();
 switch(tecla)

{
    case 49:
    printf("tecla 1 foi apertada");
    break;

    case 50:
      printf("tecla 2 foi apertada");
    break;

  case 51:
      printf("tecla 3 foi apertada");
    break;

    case 52:
      printf("tecla 4 foi apertada");
    break;

}
}
}
}



int main()

{


printf("\n BEM VINDO AO MENU DO TRABALHO PIKA DAS GALAXIAS\n\n");
    printf(" -> ESCOLHA UMA DENTRE AS OPCOES ABAIXO:\n\n");
    printf(" 1 - ABRIR IMAGEM \n 2 - GRAVAR CORES \n 3 - IDENTIFICAR CORES \n 4 - IDENTIFICAR AS ESCALAS DE CINZA\n ");

 menu();

}






