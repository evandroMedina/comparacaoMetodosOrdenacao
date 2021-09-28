#include <stdio.h>
#include <stdlib.h>
void Refaz(int Esq, int Dir, int *A)
{
int i = Esq; //posição do pai
int j;
int x ;
j = i * 2; //filho da esquerda
x = A[i];
while (j <= Dir)
{
if (j < Dir)
{
if (A[j] < A[j + 1]) //verifica se o filho da direita é
maior que o pai
j++;
}
if (x >= A[j]) //pai já maior que os filhos
break;
A[i] = A[j];
i = j;
j = i * 2;
}
A[i] = x;
}
void Constroi(int *A, int n)
{
int Esq;
Esq = (n / 2) + 1 ; //identificar onde começam os nós folha
while (Esq > 1)
{
Esq--;
Refaz(Esq, n, A);
}
}
void Heapsort(int *A, int n)
{
int Esq, Dir;
int x;
Constroi(A, n);
Esq = 1;
Dir = n;
while (Dir > 1)
{
x = A[1]; //troca o pai com a última posição
A[1] = A[Dir];
A[Dir] = x;
Dir--;
Refaz(Esq, Dir, A);
}
}
int main()
{
int vet[8] = {0, 7, 4, 5, 6, 1, 2, 3};
int i;
Heapsort(vet, 7);
for (i = 1; i < 8; i++)
printf("%d ", vet[i]);
printf("\n");
return 0;
}
