#include <stdio.h>

int main(void)
{
    int i, n;
    long fact = 1;
    
    printf("Please Enter any number to Find Factorial = ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    printf("\nFactorial of %d = %d\n",n,fact);
    
    return 0;
}
