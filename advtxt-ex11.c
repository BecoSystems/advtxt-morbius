#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, j = 0, k = 0;
    printf("Ola, seja bem vindo ao jogo morbius!!\n Para comecar a jogar digite\n 1\n para sair digite\n 2\n");
    while(i != 1 && i != 2)
    {
        if(scanf("%i", &i) != 1)
        {
            printf("digite um valor aceitavel,\n 1\n ou\n 2\n\n");
            while(getchar() != '\n');
            i = 0;/* limpa o buffer, caso digite uma entrada invalida e o retorna ao valor padrao */
        }
        else
            if(i != 1 && i != 2)
                printf("digite um valor aceitavel,\n 1\n ou\n 2\n\n");
    }

    switch(i)
    {
        case 1:
            printf("Morbius eh um mini RPG de texto, cujas acoes sao decididas por meio dos numeros que voce digitar\n");
            printf("prepare-se para esta aventura!\n\n\n");
            printf("Você e seu grupo fazem parte de um mundo onde a ciência e o sobrenatural se misturam de maneira perigosa.");
            printf("Dr. Michael Morbius, um brilhante cientista, foi transformado em uma criatura vampírica ao tentar curar sua rara doença sanguínea.");
            printf("Agora, a cidade de Nova York está abalada por ataques noturnos, enquanto boatos sobre um vampiro vivo se espalham pelas ruas.\n");
            printf("Voce estao procurando abrigo e encontram um predio aberto, ele tem o nome de Laboratorio Horizon, todos se entre entreolham e decidem entrar\n");
            printf("Dentro do laboratorio voces encontram diversas gavetas e seus amigos comecam a procurar utensilhos nelas.\n Voce abre uma gaveta e ve os seguintes itens:\n 1. Erlenmeyer com sangue dentro\n 2. Uma estaca\n\n");
            while(j != 1 && j != 2)
            {
                if(scanf("%i", &j) != 1)
                {
                    printf("digite um valor aceitavel,\n 1\n ou\n 2\n\n");
                    while(getchar() != '\n');
                    j = 0;/* limpa o buffer, caso digite uma entrada invalida e o retorna ao valor padrao */
                }
                else
                    if(j != 1 && j != 2)
                        printf("digite um valor aceitavel,\n 1\n ou\n 2\n\n");
            }
