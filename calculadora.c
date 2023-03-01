#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int op, n1, n2;
    int loop = 1;
    float res, soma, sub, div, mult;

    setlocale(LC_ALL, "Portuguese");

    while (loop == 1) 
    {
        system("cls");
        printf("*** CALCULADORA ***\n");
        printf("Escolha uma op.\n");
        printf(" Digite 1 - para somar.\n Digite 2 - para subtrair.\n Digite 3 - para multiplicar.\n Digite 4 - para dividir.\n Digite 5 - para Sair");
        printf("\nSelecione a operacao:\n");
        scanf("%d", &op);

        printf("\n Digite dois valores inteiros: \n");
        scanf("%d", &n1);
        scanf("%d", &n2);
        loop ++;

        switch (op)
        {
        case 1:
            soma = n1 + n2;
            printf("soma: %0.2f.\n", soma);
            break;
        case 2:
            sub = n1 - n2;
            printf("sub: %0.2f.\n", sub);
            break;
        case 3:
        if (n2==0){
            printf("NAO E POSSIVEL MULT POR 0!\n");
        } else{
            mult = n1 * n2;

                printf("Mult: %0.2f.\n", mult);
            break;
        }   
         
        case 4:
        if  (n2==0){
            printf("NAO E POSSIVEL DIVIDIR POR 0! \n");
            
        }else{
            div = n1 / n2;
            printf("Div: %0.2f.\n", div);
        }
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
    system("pause");
    return 0;
}