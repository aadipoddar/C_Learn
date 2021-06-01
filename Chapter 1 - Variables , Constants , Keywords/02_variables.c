#include<stdio.h>

int main() {
    int a = 4;
    // int b = 8.5; //not recommended beacuse 8.5 is not an integer

    float b = 8.5;

    char c = 'u';

    int d = 45;

    int e = 45+9;

    printf("The value of a is %d", a);// %d for integers

    printf("The value of a is %d %d \n", a ,a);

    printf("The value of b is %f \n", b);// %f for real values

    printf("The value of c is %c \n", c);// %c for characters

    printf("The sum of a and d is %d \n", a + d);

    printf("The value of e is %d\n", e);
    return 0;

}