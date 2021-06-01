#include<stdio.h>

float force(float mass);

int main() {

    int m;

    printf("Enter value of mass \n");
    scanf("%d", &m);

    printf("The value of force is %.2f\n" , force(m));
    
    return 0;
}

float force(float mass) {
    float result = mass * 9.8;
    return result;
}