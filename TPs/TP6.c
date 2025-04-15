#include<stdio.h>
#include<string.h>

#define MAX 100

struct Student {
    char full_name[50];
    char username[30];
    char password[50];
    char birth_date[50];
    int group;
};

int main(){
    struct Student s[MAX];
    int N, i, pos;
    char user_name[30];
    // read a list of students
    printf("Entre the number of students: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Entre the username: ");
        scanf("%s", &s[i].username);

        printf("Entre the full name: ");
        scanf("%s", &s[i].full_name);

        printf("Entre the password: ");
        scanf("%s", &s[i].password);

        printf("Entre the date of birth: ");
        scanf("%s", &s[i].birth_date);

        printf("Entre the group: ");
        scanf("%d", &s[i].group);
    }
    
    // 3. change password
    printf("Entre the username: ");
    scanf("%s", user_name);
    for (i = 0; i < N; i++)
    {
        if(strcmp(user_name, s[i].username) == 1){
            printf("Entre the new password: ");
            scanf("%s", &s[i].password);
        }
    }
    
    // Add a student at the end of the list
    printf("Add a student at the end of the list");
    if (N < MAX) {
        scanf("%s", &s[i].username);
        scanf("%s", &s[i].full_name);
        scanf("%s", &s[i].password);
        scanf("%s", &s[i].birth_date);
        scanf("%d", &s[i].group);
        N++;
        } else {
        printf("Unable to add! \n");
        }

    // Insert a new student into a position entered by the user.
    if (N < MAX) {
        printf("Entre the insertion position:(1 to %d) : ", N);
        scanf("%d", &pos);
        pos--; // Indices in C start from 0
        for (i = N; i > pos; i--) {
        s[i] = s[i - 1];
        }
        printf("Enter the student information :\n");
        scanf("%s", &s[pos].username);
        scanf("%s", &s[pos].full_name);
        scanf("%s", &s[pos].password);
        scanf("%s", &s[pos].birth_date);
        scanf("%d", &s[pos].group);
        N++;
    }

    // Delete a student in a user-entered position.
    if (N >= 1) {
        printf("Entre the deletion position:(1 to %d) : ", N);
        scanf("%d", &pos);
        pos--; 
        for (i = pos; i < N - 1; i++) {
        s[i] = s[i + 1];
        }
        N--;
    }
    return 0;
}


