#include <stdio.h>

int reverseNumber(int n, int reversed)
{
    if (n == 0)
        return reversed;

    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

int main()
{
    int n, reversed;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    reversed = reverseNumber(n, 0);

    printf("Reversed number: %d\n", reversed);

    return 0;
}