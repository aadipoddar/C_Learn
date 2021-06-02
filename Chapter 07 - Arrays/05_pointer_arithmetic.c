#include<stdio.h>

int main() {
    int i = 34;
    int *ptr = &i;
    printf("The address of i is %u\n", ptr);
    ptr++;
    printf("The address of i is %u\n", ptr);

    printf("The address of i is %u\n", ptr);
    ptr = ptr + 1;
    printf("The address of i is %u\n", ptr);

    char c = 34;
    char *ptri = &c;
    printf("The address of i is %u\n", ptri);
    ptri++;
    printf("The address of i is %u\n", ptri);

    return 0;
}