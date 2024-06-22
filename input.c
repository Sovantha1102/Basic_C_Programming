#include<stdio.h>

int main() {
    int num;
    char name[2];
    printf("Enter number : \n\n");
    scanf("%d",&num);
    printf("Your input is %d\n\n",num);
    printf("Enter Name : \n\n");
    gets(name);
    printf("Your input is %d\n\n",name);
    return 0;

}