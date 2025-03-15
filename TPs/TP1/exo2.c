#include<stdio.h>

int GCD(int A, int B){
    int i, gcd;
    gcd = 1;
    for (i = 1; i < B; i++)
    {
        if((A % i == 0) && (B % i == 0)){
            gcd = i;
        }
    }
    return gcd;
}

int SCM(int a, int b){
    int scm;
    scm  = (a*b) / GCD(a, b);
    return scm;
}

int main(){
    int a, b, gcd, scm;
    a = 10, b = 45;
    gcd = GCD(a, b);
    printf("The GCD of %d and %d is %d: ", a, b, gcd);

    scm = SCM(a, b);
    printf("The SCM of %d and %d is %d: ", a, b, scm);
    return 0;
}