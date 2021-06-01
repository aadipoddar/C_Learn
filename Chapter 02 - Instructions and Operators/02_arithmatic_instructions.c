#include<stdio.h>

int main() {
    int a =4;
    int b = 8;
    
    printf("The value of a + b = %d\n", a + b);
    printf("The value of a - b = %d\n", a - b);
    printf("The value of a * b = %d\n", a * b);
    printf("The value of a / b = %d\n", a / b);


    int z;
    z = a * b;//Legal  
    //b * a = z;//Illegal

    printf("The value of z = %d\n", z);


    printf("5 when dividing by 2 leaves the remainder of %d\n", 5%2);
    printf("-5 when dividing by 2 leaves the remainder of %d\n", -5%2);
    printf("5 when dividing by -2 leaves the remainder of %d\n", 5%-2);



    //No operator is assumed to pe present 
    //printf("The value of 4*5 is %d\n", (4)(5)); -->Wil not return 20 , WRONG!
    printf("The value of 4*5 is %d\n", (4)*(5));


    //There is no operator to perform exponentiation in c
    //printf("The value of 4^5 is %d\n", 4^5); --> Will not produce 4 to the power 5
    printf("The value of 4^5 is %f\n", pow(4,5));


    printf("The value of 6+5 is %d\n", 6+5);
    printf("The value of 6+5.6 is %f\n", 6+5.6);
    printf("The value of 6.1+5.6 is %f\n", 6.1+5.6);

    printf("The value of 5/2 is %d\n", 5/2);
    printf("The value of 5/2 is %f\n", 5/2);
    printf("The value of 2/5 is %d\n", 2/5);
    printf("The value of 2/5 is %f\n", 2.0/5);

    return 0;
}