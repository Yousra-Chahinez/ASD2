#include<stdio.h>

int main(){
    int i, is_pal = 1;
    char T[5] = "LEVEL";
    char *start, *end;

    start = &T[0]; // T
    end = &T[5] - 1;

    for (i = 0; i < 5/2; i++)
    {
        if (*start != *end)
        {
            is_pal = 0;
        } else {
            start++;
            end--;
        }   
    }
    
    if (is_pal == 0)
    {
        printf("The word %s is not a palindrom\n", T);
    } else {
        printf("The word %s is a palindrom\n", T);
    }
    

    return 0;
}