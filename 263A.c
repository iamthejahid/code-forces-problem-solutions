#include <stdio.h>
int main()
{
    int arr[5][5];
    int m, n;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
            if ((arr[i][j]) == 1)
            {
                m = i;
                n = j;
            }
        }
    }
    m = (m - 2);
    n = (n - 2);
    if (m < 0)
    {
        m = m * -1;
    }
    if (n < 0)
    {
        n = n * -1;
    }
    int move = m + n;
    printf("%d\n", move);
}