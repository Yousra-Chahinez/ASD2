#include <stdio.h>
#include <stdlib.h>

struct Contact {
    char Fname[20];
    char Lname[20];
    char Phone[10];
};

struct Contact c;
FILE *fptr;

void add(){
    fptr = fopen("file.txt", "w");
    
    if (fptr != NULL){
        printf("Entre first, last name, and phone: ");
        scanf("%s", &c.Fname);
        scanf("%s", &c.Lname);
        scanf("%s", &c.Phone);

        fprintf(fptr, "%s ", c.Fname);
        fprintf(fptr, "%s ", c.Lname);
        fprintf(fptr, "%s ", c.Phone);

        fclose(fptr);
    } else {
        printf("Creation failed...");
    }   
}

void display(){
    fptr = fopen("file.txt", "r");

    if (fptr != NULL){
        fscanf(fptr, "%s", &c.Fname);
        fscanf(fptr, "%s", &c.Lname);
        fscanf(fptr, "%s", &c.Phone);
        printf("%s", c.Fname);
        printf("%s", c.Lname);
        printf("%s", c.Phone);
    } else {
        printf("File doesn't exist!");
    }

    fclose(fptr);
}

int main ()
{
    // add();
    display();
    return 0;
}