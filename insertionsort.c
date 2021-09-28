#include <stdio.h>
#define N 5

int main(){

    int vet[N+1] = {0, 5, 4, 1, 3, 2};
    int i, j, chave;

    for(i=2; i <= N; i++){
        chave = vet[i];
        j = i - 1;
        vet[0] = chave; //sentinela

        while(chave < vet[j]){
            vet[j+1] = vet[j];
            j--;
        }
        vet[j + 1] = chave;
    }
        printf("\n\n");
        for(i = 1; i<= N; i++)
            printf("%d", vet[i]);

        getchar();

return(0);
}
