#include<stdio.h>

int main() {
    //97 - 122 lower case

    char ch;
    printf("Enter you character\n");
    scanf("%c", &ch);

    if(ch<=122 && ch>= 97){
        printf("It is lower case");
    }

    else{
        printf("It is not lower case");
    }
    return 0;
}