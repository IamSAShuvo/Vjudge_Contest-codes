#include <stdio.h>

int main()
{
    int n, k, i, count = 0;
    scanf("%d %d", &n, &k);
    int ara[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(ara[i] % k == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);


    return 0;
}
