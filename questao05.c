#include<stdio.h>

int main(){

    int soma = 0;

    for (int contador=1; contador <= 100; contador++)
    {
        if (contador % 2 == 0)
        {
            soma += contador;
        }

        printf("A soma dos 50 primeiros e: %d", soma);
        
    }
}