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


int main(){
    int T1[N], T2[N];
    printf("Entre the values of the first array\n");
    read_array(T1);

    printf("Entre the values of the second array\n");
    read_array(T2);

    printf("The values of the first array: \n");
    display(T1);
    return 0;
}