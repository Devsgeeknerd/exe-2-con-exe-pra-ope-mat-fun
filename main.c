#include <stdio.h>
#include <stdlib.h>

// Função principal onde o programa começa a ser executado.
void main()
{
    // Declaração de variáveis para armazenar a área do círculo e o raio.
    float area;
    float raio;

    // Constante para armazenar o valor aproximado de pi.
    const float pi = 3.14;

    // Solicita ao usuário que insira o valor do raio do círculo.
    printf("Digite o valor do raio de um circulo: ");
    // Lê o valor do raio fornecido pelo usuário e armazena na variável 'raio'.
    scanf("%f", &raio);

    // Calcula a área do círculo usando a fórmula: área = pi * raio².
    area = pi * (raio * raio);

    // Exibe o resultado da área calculada.
    printf("\nO valor da area e: %f", area);

    // Encerra a função principal (retorno explícito não é necessário em 'void main()', mas é usado aqui para indicar o final).
    return 0;
}
