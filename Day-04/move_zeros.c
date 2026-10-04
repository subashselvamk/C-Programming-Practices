#include <stdio.h>

int main()
{
    int arr[100];
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[position] = arr[i];
            position++;
        }
    }

    // Fill remaining positions with zeros
    while (position < n)
    {
        arr[position] = 0;
        position++;
    }

    printf("Array after moving zeros: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}