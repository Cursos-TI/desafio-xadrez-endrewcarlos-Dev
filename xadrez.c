#include <stdio.h>

    //Movimento do Bispo com o while Loops Aninhados
    void bispo( int movimentodobispo){
        while (movimentodobispo){  
        printf("Direita\n");
        movimentodobispo++;
    }
        
        for (int movimento2 = 1; movimento2 = 1; movimento2++)
        {
            printf("Cima\n");
            break;
        }
    }

    //Movimento da Torre com o for função Recursiva
    void torre(int movimentodatorre){
    for (movimentodatorre = 0; movimentodatorre - 5; movimentodatorre++)
    {
        printf("Direita\n");
    }
    }
    
    //Movimento da Rainha com o do-While função Recursiva
    void rainha(int movimentodarainha){
        do{
        printf("Esquerda\n");
        movimentodarainha++;
         } while (movimentodarainha);
    }
 
    //Movimento do Cavalo com for loops Aninhados
    void cavalo(int movimentodocavalo){
        for (movimentodocavalo = 0; movimentodocavalo - 2; movimentodocavalo++)
            {
                printf("Cima\n");
                continue;
                movimentodocavalo++;}
            {
                {for (int movimento2 = 1; movimento2 = 1; movimento2++)
                break;
                printf("Direita\n");
            }
            
        }
    }

    int main() {
    
        int movimentodobispo;
        printf("\nMovimento do Bispo\n");
        bispo(movimentodobispo - 5);

        int movimentodatorre;
        printf("\nMovimento da Torre\n");
        torre(movimentodatorre - 5);

        int movimentodarainha;
        printf("\nMovimento da Rainha\n");
        rainha(movimentodarainha - 8);

        int movimentodocavalo;
        printf("\nMovimento do Cavalo\n");
        cavalo(movimentodocavalo - 2);
    
    
    return 0;
}