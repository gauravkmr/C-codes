#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b)
{
    int remainder = a%b;

    if(remainder == 0)
        return b;
    else
        return GCD(b, remainder);
}

int main()
{
    int num1, num2, gcd;

    printf("find gcd of below two numbers!\n");
    scanf("%d %d", &num1, &num2);

    gcd = GCD(num1, num2);

    printf("%d", gcd);

    return 0;
}
