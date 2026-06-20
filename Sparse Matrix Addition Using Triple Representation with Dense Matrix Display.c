#include <stdio.h>

struct Sparse
{
    int row, col, value;
};

int main()
{
    struct Sparse a[100], b[100], sum[100];
    int r1, c1, t1, r2, c2, t2;
    int i, j, k = 0;

    printf("Enter rows, columns and non-zero terms of Matrix 1: ");
    scanf("%d%d%d", &r1, &c1, &t1);

    for(i = 0; i < t1; i++)
        scanf("%d%d%d", &a[i].row, &a[i].col, &a[i].value);

    printf("Enter rows, columns and non-zero terms of Matrix 2: ");
    scanf("%d%d%d", &r2, &c2, &t2);

    for(i = 0; i < t2; i++)
        scanf("%d%d%d", &b[i].row, &b[i].col, &b[i].value);

    i = j = 0;

    while(i < t1 && j < t2)
    {
        if(a[i].row == b[j].row && a[i].col == b[j].col)
        {
            sum[k].row = a[i].row;
            sum[k].col = a[i].col;
            sum[k].value = a[i].value + b[j].value;

            if(sum[k].value != 0)
                k++;

            i++;
            j++;
        }
        else if(a[i].row < b[j].row ||
               (a[i].row == b[j].row && a[i].col < b[j].col))
        {
            sum[k++] = a[i++];
        }
        else
        {
            sum[k++] = b[j++];
        }
    }

    while(i < t1)
        sum[k++] = a[i++];

    while(j < t2)
        sum[k++] = b[j++];

    int dense[10][10] = {0};

    for(i = 0; i < k; i++)
        dense[sum[i].row][sum[i].col] = sum[i].value;

    printf("\nSum Dense Matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
            printf("%d ", dense[i][j]);
        printf("\n");
    }

    return 0;
}
