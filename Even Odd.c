#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);
    if((w % 2 == 1) || (w < 3))
    {
        printf("NO! \n");
    }
    else
    {
        printf("YES! \n");
    }

    return 0;
}
