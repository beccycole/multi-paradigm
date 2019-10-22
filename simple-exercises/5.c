#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Please enter a number: ");

    scanf("%d", &n);

    for(int i = 1; i<=n; i++)
    {
        if (((i%3)==0) || ((i%5)==0))
        {
            sum += i;
        }
        
    }

    printf("The sum of 1 to %d, is %d", n, sum);


    return 0;
}