#include<stdio.h>

int main() {
    //Write a program to check if the number is divisible by 97 or not
    int num ;
    printf("Enter the number\n");
    
    scanf("%d", &num);

    printf("Divisibility Test returns: %d\n", num%97);
    return 0;
}