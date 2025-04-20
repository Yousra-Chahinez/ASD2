#include<stdio.h>
#include<stdlib.h>

int main(){
    int N, M, *A, *B, i;

    do
    {
        printf("Entre N and M: ");
        scanf("%d %d", &N, &M);
    } while ((N<=0) || (M<=0));
    
    A = (int*) malloc((N+M) * sizeof(int));
    B = (int*) malloc(M * sizeof(int));

    printf("Values of A...");
    for (i = 0; i < N; i++)
    {
         scanf("%d", &A[i]);
    }
    printf("Values of B...");
    for (i = 0; i < M; i++)
    {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < M; i++)
    {
        A[N+i] = B[i]; 
    }
    
    for (i = 0; i < N+M; i++)
    {
        printf("%d ", A[i]);
    }
    free(A);
    free(B);
    return 0;
}