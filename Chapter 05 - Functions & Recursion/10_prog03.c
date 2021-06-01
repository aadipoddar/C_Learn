#include<stdio.h>

int main() {
    int a  = 3;
    printf("%d %d %d", a, ++a, a++);//From right to left
    return 0;
}