#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, search;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter your %d elements\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("%d is present at location arr[%d]\n", search, i);

            break;
        }
    }

    if (i == n)
    {
        printf("Your element is not in the array\n");
    }

    return 0;
}
