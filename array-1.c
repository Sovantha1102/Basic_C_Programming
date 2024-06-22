#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    int n =10;
    int i;
    for(i=0 ; i<n ;i++) {
        printf("%d\n\n",arr[i]);
        sum=sum+arr[i];
    }
    printf("%d\n\n",sum);
}