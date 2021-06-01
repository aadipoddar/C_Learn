#include<stdio.h>

void display();//Function prototype

int main() {
    printf("Initialising Display Function\n");
    display();//Calling function
    printf("Display Function finished its work.\n");
    return 0;
}

//Function Definition
void display() {
    printf("This is display\n");
}