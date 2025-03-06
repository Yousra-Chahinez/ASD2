#include<stdio.h>

void display_msg(){
    printf("Welcome!");
}

int add(int a, int b){
    return a+b;
}

float absolute_value(float n){
    if (n < 0) {
        n = -n;
    }
    return n;
}


int factorial(int n){
    int i, f;
    f = 1;
    for(i = 1; i <= n; i++){  
        f = f * i;  
    }
    return f;  
}


int main() {
    int x, y, z;
    float n;
    int N;
    x = 10; 
    y = 5;
    display_msg();
    printf("\n");

    z = add(x, y);
    printf("Z = %d \n", z);
    
    printf("Enter a float value for abs calculation: ");
    scanf("%f", &n);
    printf("ABS of %.2f is %.2f", n, absolute_value(n));

    printf("\nEnter an integer for factorial calculation: ");
    scanf("%d", &N);
    printf("Factorial of %d is %d\n", N, factorial(N));
    return 0;
}