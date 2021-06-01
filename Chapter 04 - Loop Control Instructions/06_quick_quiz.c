#include<stdio.h>

int main() {
    int i = 0;
    int n;

    printf("The value of n is \n");
    scanf("%d", &n);

    do{
        printf("The number is %d \n", i+1);
        i++;
    }while(i < n);
    return 0;
}