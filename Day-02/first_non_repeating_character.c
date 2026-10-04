#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int frequency[256] = {0};
    int found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++)
    {
        frequency[(unsigned char)str[i]]++;
    }

    // Find the first character with frequency 1
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (frequency[(unsigned char)str[i]] == 1)
        {
            printf("First Non-Repeating Character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("-1\n");
    }

    return 0;
}