#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("\nUsing Array Indexing:\n");
    for(i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nUsing Pointer Notation:\n");
    for(i = 0; i < n; i++)
    {
        printf("*(ptr+%d) = %d\n", i, *(ptr + i));
    }

    printf("\nAddress Difference:\n");
    printf("Address difference between arr[0] and arr[1] = %ld bytes\n",
           (char*)&arr[1] - (char*)&arr[0]);

    return 0;
}
