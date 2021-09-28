#include <stdio.h>
#define N 5

int main(){
    int vet[N] = {5, 4, 1, 3, 2};
    int i, j, aux, min;

        for(i=0; i<N; i++){
            min = i;
            for(j=i; j<N; j++){
                if(vet[j] < vet[min]) //f(n)
                    min = j;
            }
            if(i != min){
                aux = vet[min];
                vet[min] = vet[i];
                vet[i] = aux;
            }
        }
        printf("\n\n");
        for (i = 0; i < 5; i++)
        printf(" %d", vet[i]);

        getchar();

return(0);
}
