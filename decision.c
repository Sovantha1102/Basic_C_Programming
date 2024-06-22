// #include<stdio.h>

// int main() {
//     int num;

//     printf("Enter your number : ");
//     scanf("%d",&num);

//     if(num%2 ==0) {
//         printf("Your number is (%d) even",num);
//     }else{
//         printf("Your number is (%d) odd", num);
//     }
// }

//Compare string
#include<stdio.h>
#include<string.h>

int main() {
    const char username[20] ="admin";
    const char password[10]="admin123";

    char inputUsername[20];
    char inputPassword[10];

    printf("Your username: "),scanf("%s",&inputUsername);
    printf("Your password: "),scanf("%s",&inputPassword);

    if(strcmp(username ,inputUsername) == 0) {
        if(strcmp(password,inputPassword) == 0 ) {
            printf("User Login Successfully");
        }else {
            printf("User Login Unsuccessfully");
        }
    }else{
        printf("Username is incorrect");
    }
    return 0;
}