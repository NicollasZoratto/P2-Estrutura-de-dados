#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int saldo = 1000;
    int numero_secreto, palpite;
    
    srand(time(NULL));
    
    printf("=== JOGO DE ADIVINHAÇÃO ===\n");
    printf("Saldo inicial: %d pontos\n", saldo);
    printf("Acerte: +300 pontos | Erre: -100 pontos\n");
    printf("Objetivo: atingir 3000 pontos\n\n");
    
    while (saldo > 0 && saldo < 3000) {
        numero_secreto = (rand() % 10) + 1;
        
        printf("Seu saldo atual: %d pontos\n", saldo);
        printf("Adivinhe o número (1 a 10): ");
        scanf("%d", &palpite);
        
        if (palpite == numero_secreto) {
            saldo += 300;
            printf("Parabéns! Você acertou! +300 pontos\n");
        } else {
            saldo -= 100;
            printf("Errou! O número era %d. -100 pontos\n", numero_secreto);
        }
        printf("\n");
    }
    
    if (saldo >= 3000) {
        printf("PARABÉNS! Você atingiu %d pontos e venceu o jogo!\n", saldo);
    } else {
        printf("GAME OVER! Seu saldo acabou com %d pontos.\n", saldo);
    }
    
    return 0;
}