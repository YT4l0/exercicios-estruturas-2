#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaSequencia(int quant){
    int num, i;
    int soma = 0;

    srand(time(NULL));

    for (i = 0; i < quant; i++)
    {
        num = rand()% 1000 + 1;

        printf("%d ", num); 

         soma += num;

      
    }
    


return soma;
}


int main(){
    int quant;
    float media;

    printf("digite a quantidade de numeros a serem somados: \n");
    scanf("%d",&quant);

    printf("o valor da soma da sequencia e: %d\n", somaSequencia(quant));

    media = somaSequencia(quant) / quant;

    printf("media e: %f\n", media);


    



    return 0;
}