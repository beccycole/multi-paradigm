#include <stdio.h>

int main()
{
    char name[20];

    printf("What is your name?");

    fgets(name,20,stdin);

    printf("Hello %s\n", name);

    return 0;
}