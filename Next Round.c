#include <stdio.h>

int main()
{
    int n, k, i, count = 0;
    scanf("%d %d", &n, &k);
    int contestent[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &contestent[i]);
    }
    for(i = 0; i < n; i++)
    {
        if((contestent[i] > 0) && (contestent[i] >= contestent[k-1]))
        {
           count++;
        }

    }
    printf("%d\n", count);

    return 0;
}
