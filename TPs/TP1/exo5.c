#include <stdio.h>

// Recursive function to print the string backwards
void print_backwards() {
    char c;
    scanf("%c", &c);
    
    if (c != '.') {
        print_backwards(); // Recursive call
        printf("%c", c);  // Print character after the recursive call
    }
}

int main() {
    printf("Enter a string ending with '.': ");
    print_backwards();
    printf("\n");
    return 0;
}