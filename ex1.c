#include <stdio.h>

int main()
{
    system("cls");

    int opcao;
    float saldo, deposito, saque;

    while (opcao != 4)
    {
        system("cls");
        printf("*************************************************\n");
        printf("*           SISTEMA BANCARIO UNINBANCO          *\n");
        printf("*************************************************\n");
        printf("*************************************************\n");
        printf("* 1 - SALDO                                     *\n");
        printf("*                                               *\n");
        printf("* 2 - DEPOSITAR                                 *\n");
        printf("*                                               *\n");
        printf("* 3 - SACAR                                     *\n");
        printf("*                                               *\n");
        printf("* 4 - SAIR                                      *\n");
        printf("*************************************************\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            system("cls");
            printf("Seu saldo é igual a: R$%.2f\n", saldo);
            system("pause");
            break;

        case 2:
            system("cls");
            printf("Digite o valor a ser depositado:\nR$ ");
            scanf("%f", &deposito);
            saldo = saldo + deposito;
            system("cls");
            printf("Processando...\n");
            sleep(5);
            system("cls");
            printf("Depósito realizado com sucesso!\n");
            system("pause");
            break;

        case 3:
            system("cls");
            printf("Digite o valor a ser sacado:\nR$ ");
            scanf("%f", &saque);
            if (saque > saldo)
            {
                system("cls");
                printf("Saldo insuficiente\n");
            }
            else
            {
                system("cls");
                printf("Processando...");
                sleep(5);
                system("cls");
                printf("Aguarde a contagem das cédulas...\n");
                sleep(5);
                saldo = saldo - saque;
                system("cls");
                printf("Saque realizado com sucesso!\n");
                printf("Saldo atual: R$%.2f \n", saldo);
            }
            system("pause");
            break;

        case 4:

            opcao = 4;
            break;

        default:
            break;
        }
    }
    system("cls");
    printf("Obrigado por utlizar os nossos serviços.\n");
    system("pause");
    system("cls");
}
