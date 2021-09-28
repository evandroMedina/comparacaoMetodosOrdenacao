#include <stdio.h>
void Particao (int Esq, int Dir, int *i , int *j , int *A)
{
int x, w;
*i = Esq;
*j = Dir;
x = A[(*i + *j) / 2]; /* obtem o pivo x */
do
{
while (x > A[*i]) //ando no vetor da esquerda para direita
(*i)++;
while (x < A[*j]) //ando no vetor da direita para esquerda
(*j)--;
if (*i <= *j) //troca as posições
{
w = A[*i];
A[*i] = A[*j];
A[*j] = w;
(*i)++; (*j)--;
}
} while (*i <= *j); //repete enquanto i e j não se cuzam
}
void Ordena(int Esq, int Dir , int *A)
{
int i, j;
Particao(Esq, Dir, &i, &j, A);
if (Esq < j) //chama a ordenação na partição mais à esquerda
Ordena(Esq, j, A);
if (i < Dir) //chama a ordenação na partição mais à direita
Ordena(i, Dir, A);
}
void QuickSort(int *A, int n)
{
Ordena(0, n-1, A);
}
int main()
{
int vet[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int i;
QuickSort(vet, 10);
for (i = 0; i < 10; i++)
printf("%d ", vet[i]);
return 0;
}
