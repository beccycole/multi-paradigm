#include <stdio.h>

int main()
{
    int n, sum = 0;
    int product = 1;
    char* choice = (char*) maloc(10* sizeof(char));

    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("Do you want to do product or sum?");
    scanf("%s", choice);


    if(strcmp(choice, "product")==0)
    {
        for(int i = 1; i<=n; i++)
        {
           product *= i;
    
        }

        printf("The product of 1 to %d, is %d", n, product);

    }

    } else if(strcmp(choice, "sum")==0)
    {
        for(int i = 1; i<=n; i++)
        {
           sum += i;
    
        }

        printf("The sum of 1 to %d, is %d", n, sum);

    }

    return 0;
}