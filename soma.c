#include<stdio.h>

int main()
{
    int numeroBase, inicio, fim, soma=0;

    printf("digite o numero base: ");
    scanf("%d", &numeroBase);

    printf("digite o valor incial do intervalo: ");
    scanf("%d", &inicio);

    printf("digite o valor final do intervalo: ");
    scanf("%d", &fim);

    if(inicio>fim)
    {
        printf("o valor incial deve ser menor ou igual ao valor final.\n");
        return 1;
    }

    for(int i=inicio; i<=fim; i++)
    {
        if (i% numeroBase==0)
        {
            soma+=i;
        }
    }
    printf("a soma dos multiplos de %d no intervalo[%d,%d] é: %d\n", numeroBase, inicio, fim, soma);

    return 0;

}
