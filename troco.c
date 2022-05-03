#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    // Variáveis
    float dinheiro;
    int moeda25 = 0, moeda10 = 0, moeda5 = 0, moeda1 = 0;

    // Loop entrada valor
    do
    {
        dinheiro = get_float("Quanto de troco (ex: 0.50 = 50 centavos)? ");
    }
    while(dinheiro <= 0);

    // Conversão
    int centavos = dinheiro*100;
    // Contador de moedas de 25 centavos
    while(centavos > 25 || centavos == 25)
    {
        centavos = centavos - 25;
        moeda25++;
    }
        // Contador de moedas de 10 centavos
    while(centavos > 10 || centavos == 10)
    {
        centavos = centavos - 10;
        moeda10++;
    }
        // Contador de moedas de 5 centavos
    while(centavos > 5 || centavos == 5)
    {
        centavos = centavos - 5;
        moeda5++;
    }
        // Contador de moedas de 1 centavos
    while(centavos > 1 || centavos == 1)
    {
        centavos = centavos - 1;
        moeda1++;
    }
    printf("Serão %i moedas de 25 centavos\n", moeda25);
    printf("Serão %i moedas de 10 centavos\n", moeda10);
    printf("Serão %i moedas de 5 centavos\n", moeda5);
    printf("Serão %i moedas de 1 centavos\n", moeda1);
    return 0;
}