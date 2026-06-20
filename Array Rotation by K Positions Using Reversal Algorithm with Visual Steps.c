#include <stdio.h>

#define N 10

void display(int a[])
{
    int i;
    printf("[");
    for(i = 0; i < N; i++)
    {
        printf("%d", a[i]);
        if(i < N - 1)
            printf(" ");
    }
    printf("]\n");
}

void reverse(int a[], int start, int end)
{
    int temp;
    while(start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int sumArray(int a[])
{
    int i, sum = 0;
    for(i = 0; i < N; i++)
        sum += a[i];
    return sum;
}

int main()
{
    int a[N], original[N];
    int i, k, choice;
    char dir;
    int sumBefore, sumAfter;

    printf("Enter 10 numbers: ");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
        original[i] = a[i];
    }

    do
    {
        for(i = 0; i < N; i++)
            a[i] = original[i];

        printf("\nRotate Left (L)/Right (R): ");
        scanf(" %c", &dir);

        printf("By positions: ");
        scanf("%d", &k);

        if(k < 0 || k >= N)
        {
            printf("Invalid K! Enter value between 0 and %d\n", N - 1);
            continue;
        }

        sumBefore = sumArray(a);

        printf("\nOriginal: ");
        display(a);

        if(dir == 'L' || dir == 'l')
        {
            reverse(a, 0, k - 1);
            printf("Step1: Reverse 0-%d -> ", k - 1);
            display(a);

            reverse(a, k, N - 1);
            printf("Step2: Reverse %d-%d -> ", k, N - 1);
            display(a);

            reverse(a, 0, N - 1);
            printf("Step3: Reverse all -> ");
            display(a);
        }
        else if(dir == 'R' || dir == 'r')
        {
            reverse(a, N - k, N - 1);
            printf("Step1: Reverse %d-%d -> ", N - k, N - 1);
            display(a);

            reverse(a, 0, N - k - 1);
            printf("Step2: Reverse 0-%d -> ", N - k - 1);
            display(a);

            reverse(a, 0, N - 1);
            printf("Step3: Reverse all -> ");
            display(a);
        }
        else
        {
            printf("Invalid Rotation Choice!\n");
            continue;
        }

        sumAfter = sumArray(a);
        printf("Sum difference: %d\n", sumAfter - sumBefore);

        printf("\nDo another rotation? (1-Yes / 0-No): ");
        scanf("%d", &choice);

    } while(choice == 1);

    return 0;
}
