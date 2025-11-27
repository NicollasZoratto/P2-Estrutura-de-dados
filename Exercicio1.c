#include <stdio.h>

int main() {
    int contador = 0; 
    
    printf("Números de 0 a 500 divisíveis por 5:\n");

    while (contador <= 500) {
        
        printf("%d\n", contador);
    
        contador += 5; 
    }

    return 0;
}