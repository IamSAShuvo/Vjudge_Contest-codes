#include <stdio.h>
int main()
{
    int x;
    float balance, remain_balance;
    scanf("%d %f", &x, &balance);
    if((x % 5 == 0) && ((x + 0.5) < balance))
    {
        remain_balance = balance - x - 0.5;
        printf("%.2f", remain_balance);
    }
    else if(x > balance)
    {
        printf("%.2f", balance);
    }
    else
    {
        printf("%.2f", balance);
    }

    return 0;
}
