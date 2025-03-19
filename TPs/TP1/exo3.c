#include<stdio.h>

int max_min(int a, int b, int *min){
    int max;
    if (a > b){
        max = a;
        *min = b;
    } else {
        max = b;
        *min = a;
    }
    return max;
}

// Procedure
void max_min2(int a, int b, int *min, int *max){
    if (a > b){
        *max = a;
        *min = b;
    } else {
        *max = b;
        *min = a;
    }
}

int main(){
    int A = 10, B = 18, min, max;
    
    // max = max_min(A, B, &min);
    // printf("The max is: %d \nThe min is: %d ", max, min);

    printf("Calling the procedure...\n");
    max_min2(A, B, &min, &max);
    printf("The max is: %d \nThe min is: %d ", max, min);
    return 0;
}