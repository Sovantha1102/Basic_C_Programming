#include<stdio.h>

// int main() {
//     int num[3] = {1,2,3};
//     printf("%d\n",num[0]);
//     printf("%d\n",num[1]);
//     printf("%d\n",num[2]);
// }

int main() {
    int num[3] = {1,2,3};
    for(int i=0;i<3;i++){
        if(i==2) {
            printf("%d\n",num[i]);
        }else{
            printf("%d\n",num[i]);
        }
    }
}