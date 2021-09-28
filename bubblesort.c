#include <stdio.h>
#define N 5
int main(){
    int vet[N] = {5, 4, 1, 3, 2};
    int i, j, aux;

    for(i=0; i<N; i++){
        for(j=0; j<(N -1); j++){
            if(vet[j] > vet[j+1]){ //f(n)
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
    printf("\n\n");
    for(i=0; i<N; i++)
        printf("%d", vet[i]);

    getchar();
    return (0);

}
