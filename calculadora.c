#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

int op, loop, n1, n2;
float res, soma, sub, div, mult;

setlocale(LC_ALL, "Portuguese");

while (loop == 1)
{

printf("*** CALCULADORA ***\n");
printf("Escolha uma op.\n");
printf("Digite 1 - para somar.\n 2 Digite 2 - para subtrair.\n 3 Digite 3 - para multiplicar.\n 4 Digite 4 - para dividir.\n 5 Sair");
printf("\n Digite dois valores inteiros: \n");
scanf("%d%*c", &n1);
scanf("%d%*c", &n2);
printf("\nSelecione a operação:\n");
scanf("%d%*c", &op);


switch (op){
         case 1:
        soma= n1 + n2;
        printf("soma: %f.\n", res);
    break;
         case 2:
        soma= n1 - n2;
        printf("sub: %f.\n", res);
         case 3:
        soma= n1 / n2;
        if(n2==0){
            printf("Divisão por 0!\n");
        } else{
        printf("Div: %f.\n", res);
    break;
    }
         case 4:
        soma= n1 * n2;
        printf("mult: %f.\n", res);
    break;

default:
        printf("op invalida!\n");
    break;
}
    system("pause");
    return 0;

    }
}