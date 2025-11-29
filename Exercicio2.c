#include <stdio.h>

int main() {
    int escolha;
    int contador_itens = 0;
    float custo_total = 0.0;

    printf("Bem-vindo à Loja C\n");
    
    while (escolha != 0 && contador_itens < 5) {
        
        printf("\n--- MENU DE ITENS ---\n");
        printf("Opção | Item     | Preço\n");
        printf("--------------------------------\n");
        printf("  1   | Camisa   | R$ 40,00\n");
        printf("  2   | Calça    | R$ 80,00\n");
        printf("  3   | Cinto    | R$ 25,00\n");
        printf("  4   | Sapatos  | R$ 120,00\n");
        printf("  5   | Chapéu   | R$ 35,00\n");
        printf("  0   | Finalizar Pedido\n");
        printf("--------------------------------\n");
        printf("Itens no carrinho: %d de 5\n", contador_itens);
        printf("Escolha a opção do item que deseja comprar (0 para finalizar): ");
        
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                custo_total += 40.00;
                contador_itens++;
                printf("Camisa (R$ 40,00) adicionada ao carrinho.\n");
                break;
            case 2:
                custo_total += 80.00;
                contador_itens++;
                printf("Calça (R$ 80,00) adicionada ao carrinho.\n");
                break;
            case 3:
                custo_total += 25.00;
                contador_itens++;
                printf("Cinto (R$ 25,00) adicionado ao carrinho.\n");
                break;
            case 4:
                custo_total += 120.00;
                contador_itens++;
                printf("Sapatos (R$ 120,00) adicionados ao carrinho.\n");
                break;
            case 5:
                custo_total += 35.00;
                contador_itens++;
                printf("Chapéu (R$ 35,00) adicionado ao carrinho.\n");
                break;
            case 0:
                printf("\nOpção 0 selecionada. Finalizando o pedido...\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha um número de 0 a 5.\n");
                break;
        }

        if (contador_itens == 5) {
            printf("\nLimite de 5 itens no carrinho atingido!\n");
            escolha = 0; 
        }
    }

    printf("\n======================================\n");
    printf("         RESUMO DO PEDIDO\n");
    printf("======================================\n");
    printf("Total de itens comprados: %d\n", contador_itens);
    printf("Custo Total: R$ %.2f\n", custo_total); // %.2f garante 2 casas decimais
    printf("Obrigado por comprar conosco!\n");
    printf("======================================\n");

    return 0;
}