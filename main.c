#include <stdio.h>

// Função para emitir miados.
void emitirMiados(int vezes)
{
    // Loop para imprimir "MIAU" a quantidade de vezes especificada.
    for (int i = 0; i < vezes; i++)
    {
        printf("MIAU\n");
    }
}

int main()
{
    int quantidadeMiados;

    // Solicita ao usuário para digitar a quantidade de miados desejada.
    printf("Digite a quantidade de miados desejada: ");
    scanf("%d", &quantidadeMiados);

    // Verifica se a quantidade é menor ou igual a zero.
    if (quantidadeMiados <= 0)
    {
        // Mensagem de erro se a quantidade for não positiva.
        printf("Por favor, digite um número positivo para a quantidade de miados.\n");
    }
    else
    {
        // Chama a função para emitir miados com a quantidade especificada.
        emitirMiados(quantidadeMiados);
    }

    return 0;
}
