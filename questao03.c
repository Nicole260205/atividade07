#include<stdio.h>

int main(){

    int numero, resto;

    printf("Digite un numero inteiro :\n");
    scanf("%d",&numero);


   for (resto = 1; resto <= 2 * numero; resto += 2){
        printf("%d-",resto);
        if (resto == numero - 1)
        {
            return 0;
        }
        
    }
}