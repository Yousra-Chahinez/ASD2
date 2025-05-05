#include<stdio.h>
#include<stdlib.h>

void read_array(int A[], int N){
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
}

void compute_avg(int a[], int b[], int M){

    for (int i = 0; i < M; i++)
    {
        b[i] = (a[i*3] + a[i*3+1] + a[i*3+2])/3;
    }
}

int main(){
    int N, M, *A, *B;
    do
    {
        printf("Enter N (must be positive and divisible by 3): ");
        scanf("%d", &N);
    } while ((N<=0) || ((N%3)!=0));
    
    A = (int*)malloc(N*sizeof(int));
    printf("Enter array elements: ");
    read_array(A, N);

    M = N / 3;  // B should store N/3 averages
    B = (int*)malloc(M * sizeof(int));
    compute_avg(A, B, M);

    // Print the averages
    printf("Averages of triplets:\n");
    for (int i = 0; i < M; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    free(A);  
    free(B);
    return 0;
}