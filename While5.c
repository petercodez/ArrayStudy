#include <stdio.h>

int main() {
    long long numero; // Mudamos o tipo de int para long long
    int contadorDigitos = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%lld", &numero); // Usamos %lld para ler um long long

    // Caso 1: O número é 0
    if (numero == 0) {
        contadorDigitos = 1; // O número 0 possui 1 dígito.
    }
    // Caso 2: O número é negativo
    else if (numero < 0) {
        numero = -numero; // Transforma o número em positivo para a contagem
        printf("Numero negativo detectado. Contando digitos do valor absoluto...\n");
    }

    // --- Contagem Principal com While ---
    if (numero > 0) {
        while (numero > 0) {
            numero = numero / 10; // Remove o último dígito
            contadorDigitos++;     // Incrementa o contador
        }
    }
    printf("O numero digitado possui %d digito(s).\n", contadorDigitos);

    return 0;
}