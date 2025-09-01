#include <stdio.h>

  void moverTorreRecursivo(int casas, int direcao) {
     if( casas ==0) return; //caso nenhuma casa para mover

     switch(direcao) { 
       case 1: printf("Cima\n"); break;
       case 2: printf("Baixo\n"); break;
       case 3: printf(" Direita\n"); break;
       case 4: printf("Esqierda\n"); break;
       default: printf("Opção Inválida, Tente Novamente!\n"); break;

       } moverTorreRecursivo(casas -1, direcao);
  }
      void MoverBispoRecursivo(int casas, int direcao) {
         if(casas == 0) return;
    
            for(int vertical = 0; vertical < 1; vertical ++){
                for(int horizontal = 0; horizontal < 1; horizontal++){
                     switch(direcao){ 
                         case 1: printf("Cima\n"); printf("Direita\n"); break;
                         case 2: printf("Cima\n"); printf("Esquerda\n"); break;
                         case 3: printf("Baixo\n"); printf("Direita\n"); break;
                         case 4: printf("Baixo\n"); printf("Esquerda\n"); break;
                         default: printf("Direção inválida!\n"); return;
                     }
                }
            }
       MoverBispoRecursivo(casas -1, direcao);
   } 
     void MoverRainhaResponsivo(int casas, int direcao){
         if (casas == 0) return;
            switch (direcao) {
        case 1: printf("Cima\n"); break;
        case 2: printf("Baixo\n"); break;
        case 3: printf("Esquerda\n"); break;
        case 4: printf("Direita\n"); break;
        case 5: printf("Cima, Direita\n"); break;
        case 6: printf("Cima, Esquerda\n"); break;
        case 7: printf("Baixo, Direita\n"); break;
        case 8: printf("Baixo, Esquerda\n"); break;
        default: printf("Direção inválida!\n"); return;
    }
     MoverRainhaResponsivo(casas - 1, direcao); // Recursão para próxima casa
      }
      void MoverCavalo(int movimento){
         switch(movimento) {
            case 1:
                printf("2 para cima\n1 para direita\n");
                break;
            case 2:
                printf("2 para cima\n1 para esquerda\n");
                break;
            case 3:
                printf("2 para baixo\n1 para direita\n");
                break;
            case 4:
                printf("2 para baixo\n1 para esquerda\n");
                break;
            case 5:
                printf("1 para cima\n2 para direita\n");
                break;
            case 6:
                printf("1 para cima\n2 para esquerda\n");
                break;
            case 7:
                printf("1 para baixo\n2 para direita\n");
                break;
            case 8:
                printf("1 para baixo\n2 para esquerda\n");
                break;
            default:
                printf("Movimento inválido!\n");
                break;
         }
      }

      int main () {
           int movimento, opcao, casas;
  
                              //Menu
           printf("Seja bem-vindo ao jogo de Xadrez em C nível avançado!!\n");
            printf("Escolha uma opção da peça que deseja mover:\n");
             printf("1. Torre\n");
               printf("2. Bispo\n");
                printf("3. Rainha\n");
                  printf("4. Cavalo\n");
                   printf("5. Informações das peças\n");
                     scanf("%d", &opcao);

        switch (opcao) {
          case 1:
           printf("Torre Escolhida!!\n");
            printf("Qual a posição deseja mover?\n");
            printf("1. Cima\n2. Baixo\n3. Esquerda\n4. Direita\n");
            scanf("%d", &movimento);

            printf("Escolha quantas casas deseja mover (máx 5): \n");
            scanf("%d", &casas);

             if (casas > 0 && casas <= 5) {
               moverTorreRecursivo(casas, movimento);
             } else {
              printf("Opção inválida, tente novamente!!\n");
             } printf("\n");
              break;
        

              case 2 :
             printf("Bispo Escolhido!!\n");
             printf("Qual a posição deseja mover\n");
            printf("1.Cima Direita\n 2. Cima Esquerda\n 3. Baixo Direita\n 4.Baixo Esquerda");
            scanf("%d", &movimento);
                
              printf("Esolha quantas casas deseja mover (Máx 5):\n");
              scanf("%d", &casas);
                
               if (casas > 0 && casas <= 5) {
                MoverBispoRecursivo(casas, movimento);
                
               }else {
                printf("Opção inválida, Tente novamente!\n");
               } printf("\n");
                break;

                 case 3: //rainha
               printf("Rainha Escolhida!!\n");
             printf("Qual a posição deseja mover\n");
              printf("1. Cima\n2. Baixo\n3. Esquerda\n4. Direita\n");
            printf("5. Cima, Direita\n6. Cima, Esquerda\n7. Baixo, Direita\n8. Baixo, Esquerda\n");
            scanf("%d", &movimento);

            printf("Escolha o número de casas (máx 8): ");
            scanf("%d", &casas);

            if (casas > 0 && casas <= 8) {
                MoverRainhaResponsivo(casas, movimento);
            } else {
                printf("Número inválido de casas! Tente novamente.\n");
            }
            printf("\n");
            break;
    case 4: // cavalo
            printf("Cavalo escolhido!!\n");
            printf("Escolha a direção do movimento do cavalo:\n");
            printf("1. 2 para cima, 1 para direita\n");
            printf("2. 2 para cima, 1 para esquerda\n");
            printf("3. 2 para baixo, 1 para direita\n");
            printf("4. 2 para baixo, 1 para esquerda\n");
            printf("5. 1 para cima, 2 para direita\n");
            printf("6. 1 para cima, 2 para esquerda\n");
            printf("7. 1 para baixo, 2 para direita\n");
            printf("8. 1 para baixo, 2 para esquerda\n");
            scanf("%d", &movimento);
            MoverCavalo(movimento);
            printf("\n");
            break;



        case 5: // Informações das peças
            printf("Informações das peças:\n");
            printf("Torre: movimenta-se para cima, baixo, esquerda e direita, até 5 casas.\n");
            printf("Bispo: movimenta-se nas diagonais, até 5 casas.\n");
            printf("Rainha: movimenta-se para todos os lados e diagonais, até 8 casas.\n");
            printf("Cavalo: movimenta-se em formato de L (2 casas para cima e 1 para direita).\n");
            printf("\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
                 

        }

    