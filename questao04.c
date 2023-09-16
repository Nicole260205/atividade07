#include<stdio.h>

int main(){

    int contador = 0;
    int numero = 12;

    while (contador < 5)
    {
        if (numero % 3 == 0){
            printf("%d\n", numero);
            contador++;
        }
        numero++;
    }
    return 0;
}