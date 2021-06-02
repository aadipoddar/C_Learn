#include<stdio.h>

int main() {
    int a = 6;
    int *ptr;
    ptr = &a;
    printf("The address of varible a is %u\n" , &a);
    printf("The address of varible a is %u\n" , ptr);
    printf("The value of varible a is %u\n" , *ptr);
    printf("The value of varible a is %u\n" , a);
    return 0;
}