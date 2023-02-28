#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

int op;
float n1, n2, res, soma, sub, div, mult;


printf("Escolha uma op.\n");
printf("Digite 1 para somar.\n");
printf("Digite 2 para subtrair.\n");
printf("Digite 3 para multiplicar.\n");
printf("Digite 4 para dividir.\n");
scanf("/f", &op);

printf("Escolha o valor n1");
scanf("/d", &n1);

printf("Escolha o valor n1");
scanf("/d", &n2);


switch (op){
         case 1:
        soma= n1 + n2;
        printf("%f + %f = %f ", n1, n2, res);
    break;
        case 2:
        sub= n1 - n2;
        printf("%f + %f = %f ", n1, n2, sub);
    break;
        case 3:
        div= n1 / n2;
        printf("%f + %f = %f ", n1, n2, div);
    break;
        case 4:
        mult= n1 * n2;
        printf("%f + %f = %f ", n1, n2, mult);
    break;

default:
        printf("op invalida!\n");
    break;
}



}