#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    scanf("\n", n);

    for(int i = 1; i<=n; i++)
    {
        sum += i;
    }

    printf("The sum of 1 to %d, was %d", n, sum);



    return 0;
}