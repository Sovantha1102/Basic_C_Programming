#include <stdio.h>

int sum(int num1 ,int num2) {
    int res = num1 + num2;
    return res;
}

void print() {
    printf("Hello world");
}

int main() {
    int result =sum(2,3);
    print("%d\n",result);
    print();


}