#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int left, int right)
{
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main()
{
    char str[100];
    int maxLength = 0;
    int start = 0;
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            if (isPalindrome(str, i, j))
            {
                if (j - i + 1 > maxLength)
                {
                    maxLength = j - i + 1;
                    start = i;
                }
            }
        }
    }

    printf("Longest Palindromic Substring: ");

    for (int i = start; i < start + maxLength; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}