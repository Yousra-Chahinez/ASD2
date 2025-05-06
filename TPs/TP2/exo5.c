#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char Fname[20];
    char Lname[20];
    char Phone[10];
};

struct Contact c;
FILE *fptr;

void add() {
    fptr = fopen("contacts.txt", "a");  // Use "a" mode to append instead of overwrite
    
    if (fptr == NULL) {
        printf("Failed to open file!\n");
        return;
    }
    
    printf("Enter first name: ");
    scanf("%s", c.Fname);
    printf("Enter last name: ");
    scanf("%s", c.Lname);
    printf("Enter phone: ");
    scanf("%s", c.Phone);

    fprintf(fptr, "%s %s %s\n", c.Fname, c.Lname, c.Phone);
    fclose(fptr);
    printf("Contact added successfully!\n");
}

void display() {
    fptr = fopen("contacts.txt", "r");
    
    if (fptr == NULL) {
        printf("No contacts found!\n");
        return;
    }
    
    printf("\n--- All Contacts ---\n");
    while(fscanf(fptr, "%s %s %s", c.Fname, c.Lname, c.Phone) != EOF) {
        printf("First: %s\n", c.Fname);
        printf("Last: %s\n", c.Lname);
        printf("Phone: %s\n\n", c.Phone);
    }
    fclose(fptr);
}

void search() {
    char searchName[20];
    int found = 0;
    
    printf("Enter first name to search: ");
    scanf("%s", searchName);
    
    fptr = fopen("contacts.txt", "r");
    if (fptr == NULL) {
        printf("No contacts found!\n");
        return;
    }
    
    printf("\n--- Search Results ---\n");
    while(fscanf(fptr, "%s %s %s", c.Fname, c.Lname, c.Phone) != EOF) {
        if(strcmp(c.Fname, searchName) == 0) {
            printf("First: %s\n", c.Fname);
            printf("Last: %s\n", c.Lname);
            printf("Phone: %s\n\n", c.Phone);
            found = 1;
        }
    }
    
    if (!found) {
        printf("No contacts matching '%s' found.\n", searchName);
    }
    fclose(fptr);
}

int main() {
    int choice;
    
    do {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: add(); break;
            case 2: display(); break;
            case 3: search(); break;
            case 4: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);
    
    return 0;
}