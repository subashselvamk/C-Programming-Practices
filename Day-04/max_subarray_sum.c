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

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (currentSum + arr[i] > arr[i])
        {
            currentSum = currentSum + arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("Maximum Subarray Sum: %d\n", maxSum);

    return 0;
}