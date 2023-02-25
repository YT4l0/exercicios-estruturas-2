#include <stdio.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "portuguese");

    int n, i, sum = 0, num;
    float media;
    
    printf("Digite o número de valores a serem inseridos: ");
    scanf("%d", &n);
    
    printf("Digite %d valores:\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    
    media = (float) sum / n;
    
    printf("Soma = %d\n", sum);
    printf("Média = %.2f\n", media);
    
    return 0;
}
