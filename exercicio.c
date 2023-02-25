#include <stdio.h>
#include <stdlib.h>

/*Função que converte graus Celsius em graus Fahrenheit e imprime uma tabela
Recebe dois parâmetros inteiros, mas eles não são usados como entrada de dados
Em vez disso, o parâmetro celsius é inicializado em 30 e incrementado até 50
Enquanto o parâmetro fahrenheit é atribuído ao valor de celsius mais 32 */

int Celsius(int celsius, int fahrenheit)
{

    for (celsius = 30; celsius <= 50; celsius++)
    {
        fahrenheit = celsius + 32;
        printf("%d\t%d\n", celsius, fahrenheit);
    }
}

int main()
{
    int celsius, fahrenheit;

    // imprime a tabela
    printf("Celsius\tFahrenheit\n");

    Celsius(celsius, fahrenheit);

    return 0;
}
