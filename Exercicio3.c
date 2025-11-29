#include <stdio.h>

int main() {
    int numero_secreto = 42; 
    int palpite;
    
    printf("Adivinhe o número secreto (entre 1 e 100): ");
    scanf("%d", &palpite);
    
    while (palpite != numero_secreto) {
        if (palpite < numero_secreto) {
            printf("O número secreto é MAIOR que %d\n", palpite);
        } else {
            printf("O número secreto é MENOR que %d\n", palpite);
        }
        
        printf("Tente novamente: ");
        scanf("%d", &palpite);
    }
    
    printf("Parabéns! Você acertou o número secreto: %d\n", numero_secreto);
    
    return 0;
}