#include <stdio.h>

int main()
{
    int ratting;
    printf("Enter your ratting\n");
    scanf("%d", &ratting);

    switch (ratting)
    {
    case 0:
        printf("Your ratting is 0\n");
        break;
    case 1:
        printf("Your ratting is 1\n");
        break;
    case 2:
        printf("Your ratting is 2\n");
        break;
    case 3:
        printf("Your ratting is 3\n");
        break;
    case 4:
        printf("Your ratting is 4\n");
        break;
    case 5:
        printf("Your ratting is 5\n");
        break;
    default:
        printf("Your ratting is invalid\n");
        break;
    }

    return 0;
}