#include <stdio.h>

int main()
{
    char str[100];
    int frequency[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    printf("After removing duplicates: ");

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (frequency[(unsigned char)str[i]] == 0)
        {
            printf("%c", str[i]);
            frequency[(unsigned char)str[i]] = 1;
        }
    }

    printf("\n");

    return 0;
}