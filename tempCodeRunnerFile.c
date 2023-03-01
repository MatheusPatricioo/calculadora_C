#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

int op, loop, n1, n2;
float res, soma, sub, div, mult;

setlocale(LC_ALL, "Portuguese");

while (loop == 1)
{
system("cls");
printf("*** CALCULADORA ***\n");
printf("Escolha uma op.\n");
printf("Digite 1 - para somar.\n 2 Digite 2 - para subtrair.\n 3 Digite 3 - para multiplicar.\n 4 Digite 4 - para dividir.\n 5 Sair");
printf("\n Digite dois valores inteiros: \n");
scanf("%d", &n1);
scanf("%d", &n2);
printf("\nSelecione a operação:\n");
scanf("%d", &op);


switch (op){
         case 1:
        soma= n1 + n2;
        printf("soma: %f.\n", res);
    break;
         case 2:
        sub= n1 - n2;
        printf("sub: %f.\n", res);
    break;
         case 3:
        mult= n1 * n2;
        if(n2==0){
            printf("Divisão por 0!\n");
        } else{
        printf("Div: %f.\n", res);
    break;
    }
         case 4:
        div= n1 / n2;
        printf("mult: %f.\n", res);
    break;
        case 5:
        loop = 0;
        res = 0;
        printf("A calculadora sera encerrada!");
    break;

default:
       res = 0;
       printf("Nenhuma operação valida %d\n", res);

        
        printf("\nPressione ENTER para continuar");
        getchar();
        } 
    }
    
    return 0;
}