#include <stdio.h>
#include <stdlib.h>

void Shellsort(int *A, int n)
{
    int i, j;
    int h = 1;
    int x;

    do
        h = h * 3 + 1; //Cálculo do H
    while (h < n); 

    do
    {
		/*Sempre inicia o laço diminuindo H
		 Ex.: Se n = 8 então inicialmente H = 13 e deve ser reduzido
		 */
        h /= 3;
         
        for (i = h; i < n; i++)
        {
            x = A[i] ;
            j = i;
            while (A[j - h] > x)
            {
                A[j] = A[j - h]; //Arrastos de uma chave H distante
                j -= h;
                if (j < h)
                    break;
            }
            A[j] = x; //Inserção da chave
        }
    } while (h != 1);
}

int main()
{
    int vet[15] = {5, 4, 1, 3, 2, 6, 19, 11, 100, 99, 80, 12, 71, 14, 20};
    int i;

    Shellsort(vet, 15);

    for (i = 0; i < 15; i++)
        printf("%d ", vet[i]);
        
    getchar();
    return 0;
}
