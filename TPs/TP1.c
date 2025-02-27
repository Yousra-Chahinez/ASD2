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
    int N, i;
    char user_name[30], new_psw[30];
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
    scanf("%s", user_name);
    for (i = 0; i < N; i++)
    {
        if(strcmp(user_name, s[i].username) == 1){
            scanf("%s", &s[i].password);
        }
    }
    


    return 0;
}