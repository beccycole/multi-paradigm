#include <stdio.h>

int main()
{
    char* name;

    printf("What is your name?");

    fgets(name,20,stdin);
    gets(name)

    if ((strcmp(name, "Alice")==0) || (strcmp(name,"Bob")==0))
    {
        printf("Hello %s\n", name);
    } else{
        printf("Hello Peasant!");
    }

    return 0;
}