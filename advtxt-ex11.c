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
            switch(j)
            {
                case 1:
                    printf("voces conseguiram uma amostra do sangue de morbius, podera ser usado para fazer um antidoto contra o vampiro!!!\n");
                    printf("um de seus amigos eh cientista e consegue fazer um antidoto\n");
                    printf("Todos escutam um forte barulho vindo de fora\n\n");
                    printf("1. voces saem para descobrir o que aconteceu\n");
                    printf("2. ficar e ajudar com o antidoto\n\n");
                    while(k != 1 && k != 2)
                    {
                        if(scanf("%i", &k) != 1)
                        {
                            printf("digite um valor aceitavel,\n 1\n ou\n 2\n\n");
                            while(getchar() != '\n');
                            k = 0;/* limpa o buffer, caso digite uma entrada invalida e o retorna ao valor padrao */
                        }
                        else
                            if(k != 1 && k != 2)
                                printf("digite um valor aceitavel,\n 1\n ou\n 2\n\n");
                    }
                    switch(k)
                    {
                        case 1:
                            printf("Morbius aparece e ataca todos voces.\n Infelizmente Voce e seu grupo morreram tendo seus sangues sugados por Morbius!!!\n\n GAME OVER!\n\n");
                            break;
                        case 2:
                            printf("Morbius invade o prédio e fareja todos voces!\n Por sorte, seu amigo consegue terminar o antidoto!\n Morbius os ataca, mas voces atiram o antidoto nele.\n Parabens, Voces salvaram a cidade de Nova York!\n\n Voce Venceu!\n\n");
                            break;
                    }
                    break;
                case 2:
                    printf("voce achou uma estaca e acreditou que estava vivendo em um dos contos de vampiros comuns.\n\n Morbius te encontrou!\n\n ao usar sua estaca no vampiro, voce tem o azar de descobrir que ele resistiu!\n voce morreu e seu grupo tambem!\n\n GAME OVER\n\n");
                    break;
            }

            break;
        case 2:
            printf("até uma proxima!\n");
            break;
    }
    return 0;
}
