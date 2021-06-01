#include<stdio.h>

//sum is a function that take inputs a and b and return an integer as a sum
int sum(int a, int b);//function prototype declaration

int main() {
    int c;
    c = sum(3,5);//function call
    printf("The value of c is %d", c);
    return 0;
}

int sum(int a, int b){
    int result ;
    result = a + b;
    return result;
}