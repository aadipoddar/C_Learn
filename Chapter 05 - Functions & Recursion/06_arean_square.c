#include<stdio.h>
#include<math.h>

int main() {
    float side;

    printf("Enter the value of sides\n");
    scanf("%f",&side);

    printf("The value of areas is %f\n",pow(side,2));
    return 0;
}