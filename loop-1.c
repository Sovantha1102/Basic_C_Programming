#include<stdio.h>

int main() {
    int num;
    for(int i=0 ; i<5 ;i++) {
        printf("Input number (%d): ",i+1),scanf("%d",&num);
        if(num%2 ==0) {
            printf("Your number is %d even \n\n",num);
        }else{
            printf("Your number is %d odd \n\n", num);
        }
    }
    return 0;
}