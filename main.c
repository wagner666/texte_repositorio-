#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int produto;
    float quantidade, preco, total;
    preco=25;

    setlocale (LC_ALL, "Portuguese");

    printf("\tTabela de preços doces e avarias\t\n\n");

    printf("1-Cocada cremosa com coco\n");
    printf("2-Cocada cremosa com café\n");
    printf("3-Cocada cremosa com chocolate\n");
    printf("4-Cocada cremosa com maracujá\n");
    printf("5-Cocada cremosa com prestigio\n");
    printf("6-Cocada cremosa com limão\n");
    printf("7-Cocada cremosa com goiabada\n");
    printf("8-Cocada cremosa com geleia de ameixa\n");
    printf("9-Cocada cremosa com kiwi\n");
    printf("10-Cocada cremosa com geleia colorida\n");
    printf("11-Cocada cremosa com frutas vermelhas\n");
    printf("12-Cocada cremosa com morango\n");
    printf("13-Cocada cremosa com amora\n");
    printf("14-Cocada cremosa com abobora\n");

    printf("\n");

    printf("Mé enforme o sabor que deseja : 1 a 14\n");
    scanf("%d", &produto);

    switch (produto)
    {
    case 1:
        printf("Cocada cremosa com coco\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

        printf("Valor a sér pago R$%1.2f reas ", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 2:
        printf("Cocada cremosa com café\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 3:
        printf("Cocada cremosa com chocolate\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 4:
        printf("Cocada cremosa com maracujá\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 5:
        printf("Cocada cremosa com prestigio\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 6:
        printf("Cocada cremosa com limão\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 7:
        printf("Cocada cremosa com goiabada\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 8:
        printf("cocada cremosa com geleia de ameixa\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 9:
        printf("Cocada cremosa com kiwi\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 10:
        printf("Cocada cremosa com geleia colorida\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 11:
        printf("Cocada cremosa com frutas vermelhas\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 12:
        printf("Cocada cremosa com morango\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 13:
        printf("Cocada cremosa com amora\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    case 14:
        printf("Cocada cremosa com abobora\n");

        printf("\n");

        printf("Digite a quantidade:\n");
        scanf("%f", &quantidade);

        total = quantidade * preco;

         printf("Valor a sér pago R$%1.2f reas", total);

        if (produto =="")
        {

            printf("Compra efetuada com sucesso ");

        }
        break;

    }

    getch();



    return 0;
}
