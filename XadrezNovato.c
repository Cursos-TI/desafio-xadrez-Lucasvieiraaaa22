#include <stdio.h>

int main() {

 int torre, bispo, rainha, opcao;
 

      // Informações e Menu
            printf("Seja bem-vindo ao jogo de Xadrez em c nível novato!!\n");
                printf("Escolha Uma opção da peça que deseja mover\n");
                     printf("1.Torre\n");
                         printf("2.Bispo\n");
                             printf("3.Rainha\n");
                                printf("4.Informações das peças\n");
                                    scanf("%d", &opcao);

               switch (opcao)// opcao para a escolha do menu
          
           {   case 1:
            printf("Torre escolhida\n");
                 printf("Escolha qual posição deseja mover:\n");
                      printf("1. Cima\n");
                         printf("2. Baixo\n");
                               printf("3. Esquerda\n");
                                   printf("4. Direita\n");
                                       scanf("%d", &opcao);

                                                         // mover Casas

                                             printf("Escolha quantas casas deseja mover (máx 5): ");
                                                 scanf("%d", &torre);

                           if (torre <= 5) { // Verificar se é maior ou menor que 5
                                 int i = 1;
                                     while (i <= torre) {
                                           switch (opcao) {
                                                case 1: printf("Cima\n"); break;
                                                   case 2: printf("Baixo\n"); break;
                                                        case 3: printf("Esquerda\n"); break;
                                                            case 4: printf("Direita\n"); break;
                                                                 default: printf("Opção inválida!\n"); break;
                                                                        }  i++;
                                                         }   
           
                                  } else {
                                      printf("Você digitou um número maior que 5, tente novamente!\n");
                                         }    break;

             //Peça Bispo
              case 2: // segunda peça
                   printf("Bispo escolhido!\n");
                                        //escolha do menu
                       printf("Escolha a direção da diagonal:\n");      
                           printf("1. Cima, Direita\n");
                             printf("2. Cima, Esquerda\n");
                                  printf("3. Baixo, Direita\n");
                                       printf("4. Baixo, Esquerda\n");
                                            scanf("%d", &opcao);

                                            //Escolha o Numero de Casas a se mover

                                            printf("Escolha o número de casas (máx 5): ");
                                                        scanf("%d", &bispo);

            if (bispo <= 5) {
                for (int i = 1; i <= bispo; i++) {
                    switch (opcao) {
                        case 1: printf("Cima, Direita\n"); break;
                        case 2: printf("Cima, Esquerda\n"); break;
                        case 3: printf("Baixo, Direita\n"); break;
                        case 4: printf("Baixo, Esquerda\n"); break;
                        default: printf("Opção inválida!\n"); break;
                                    }
                                                  }
                                  } else {
                         printf("Você digitou um número maior que 5, tente novamente!\n");
            } break; 
         
                                                   // Rainha
            case 3: 
            printf("Rainha escolhida!\n");      
                        //escolha do menu    
            printf("Escolha a direção da posição que deseja mover:\n");      
            printf("1. Cima\n");
            printf("2. Baixo\n");
            printf("3. Esquerda\n");
            printf("4. Direita\n");
            printf(" Diagonais\n");
            printf("5. Cima, Direita\n");
            printf("6. Cima, Esquerda\n");
            printf("7. Baixo, Direita\n");
            printf("8. Baixo, Esquerda\n");
            scanf("%d", &opcao);
                                    //escolha da qtd de casas a se mover
                      printf("Escolha o número de casas (máx 8): ");
                        scanf("%d", &rainha);

                                //parte lógica    
                         if (rainha <= 8) {
                             int i = 1;
                                  do {
                                      switch (opcao) {
                                                        case 1: printf("Cima\n");break;
                                                        case 2 : printf("Baixo\n"); break;
                                                        case 3: printf("Esquerda\n");break;
                                                        case 4 :printf(" Direita\n");break;
                                                        case 5: printf("Cima, Direita\n");break;
                                                        case 6: printf("Cima, Esquerda\n");break;
                                                        case 7:  printf("Baixo, Direita\n");break;
                                                        case 8: printf("Baixo, Esquerda\n");break;
                                                      }
                                                         i++;
                                     } while  (i <= rainha);
                                                      } else {
                                                                  printf("Você digitou um número maior que 8, tente novamente!\n");
                                                              }

                //informações das peças
                 case 4 :
                  printf("A peça Torre permite a movimentação para todos os lados (cima,baixo,direita,esquerda) com o maximo de 5 casas\n");
                     printf("A peça Bispo permite a movimentação para todas as diagonais com o maximo de 5 casas\n");
                      printf("A peça Rainha permite a movimentação para todos os lados incluindo diagonais com  o maximo de 8 casas\n");
                    break;
      
            }
        }
    
