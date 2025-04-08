#include <stdio.h>

     int main (){
        
        int i = 1;

        printf("\n###### Bem-vindo ao Jogo Movimento Peças de Xadrez ######\n");

        //Movimento do Bispo com o while
        while (i < 5)
        {  
            printf("\nMovimento do Bispo\n");
            printf("Pra Cima, direita\n");
            printf("Pra Cima, esquerda\n");
            i++;
        }
        
        //Movimento da Rainha com o do-while
        do
        {
           printf("\nMovimento da Rainha\n");
           printf("Pra Direita\n");
           printf("Pra Esquerda\n");
           printf("Pra Cima\n");
           printf("Pra Baixo\n");
           printf("Pra cima, direita\n");
           printf("Pra cima, esquerda\n");
           i++;
        } while (i < 8);
        
        //Movimento da Torre com o for
        for (int i = 0; i < 5; i++)
        {
            printf("\nMovimento da Torre\n");
            printf("Direita\n");
            printf("Esquerda\n");
        }
        
        return 0;
     }