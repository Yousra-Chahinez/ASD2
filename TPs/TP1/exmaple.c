#include<stdio.h>

void example(int *a, int *b){ 
    *a = *a + 7;
    *b = *b + 1;
}

int main(){
    int x=2, y=3;
    printf("X = %d \nY = %d\n", x, y);
    printf("After calling the example procedure\n");
    example(&x, &y);
    printf("X = %d \nY = %d\n", x, y);
    return 0;
}