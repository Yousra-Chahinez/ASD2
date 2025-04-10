#include<stdio.h>
#define N 3

void read_array(int A[]){
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
}

void display(int A[]){
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
}

void add(int A[], int B[], int C[]){
    for (int i = 0; i < N; i++)
    {
        C[i] = A[i] + B[i];
    }
}

int dot_product(int A[], int B[]){
    int dot_p = 0;
    for (int i = 0; i < N; i++)
    {
        dot_p = dot_p + (A[i] * B[i]);
    }
    return dot_p;
}

int main(){
    int T1[N], T2[N], T3[N], dot_p;
    printf("Entre the values of the first array\n");
    read_array(T1);

    printf("Entre the values of the second array\n");
    read_array(T2);

    add(T1, T2, T3);

    printf("\nThe values of the first array: \n");
    display(T1);
    printf("\nThe values of the second array: \n");
    display(T2);
    printf("\nResults = : \n");
    display(T3);

    dot_p = dot_product(T1, T2);
    printf("\nThe dot product is %d ", dot_p);
    return 0;
}