#include <stdio.h>

// Potência Simples

#include <stdio.h>

int main() {
    int base;
    int expoente;
    long long resultado = 1; // Usamos long long para evitar estouro em potências maiores
    int contador = 0;       // Usaremos um contador para controlar as multiplicações

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente (numero inteiro positivo): ");
    scanf("%d", &expoente);

    // Tratamento para expoente 0: qualquer número elevado a 0 é 1
    if (expoente == 0) {
        resultado = 1;
    }
    // Tratamento para expoente negativo: o exercício pede positivo, mas é uma boa prática
    else if (expoente < 0) {
        printf("Expoente negativo nao suportado para esta implementacao simples.\n");
        return 1; // Retorna um código de erro
    }
    // Calcular a potência para expoentes positivos
    else {
        // O laço continuará enquanto o contador for menor que o expoente
        while (contador < expoente) {
            resultado *= base; // Multiplica o resultado pela base
            contador++;        // Incrementa o contador
        }
    }

    printf("O resultado de %d elevado a %d e: %lld\n", base, expoente, resultado);

    return 0;
}