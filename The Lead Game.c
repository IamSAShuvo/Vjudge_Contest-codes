#include <stdio.h>

int main()
{
    int round;
    scanf("%d", &round);
    int total_1[round], total_2[round], i, j, k, max, max_2, lead_1[round], lead_2[round];
    int player1[round], player2[round];
    for(i = 0; i < round; i++)
    {
        scanf("%d %d", &player1[i], &player2[i]);
    }
    int sum_p1 = 0;
    int sum_p2 = 0;
    for(i = 0; i < 5; i++)
    {
       sum_p1 = sum_p1 + player1[i];
       total_1[i] = sum_p1;
    }
    for(i = 0; i < 5; i++)
    {
        sum_p2 = sum_p2 + player2[i];
        total_2[i] = sum_p2;
    }
    int lead1conunt = 0, lead2conunt = 0;
    for(i = 0, j = 0, k = 0; i < 5; i++)
    {
        if(total_1[i] > total_2[i])
        {
            lead_1[j] = total_1[i] - total_2[i];
            lead1conunt++;
            j++;
        }
        else
        {
            lead_2[k] = total_2[i] - total_1[i];
            lead2conunt++;
            k++;
        }
    }
    max = 0;
    max_2 = lead_2[0];
    for(i = 0; i < lead1conunt; i++) {
        if(lead_1[i] > max) {
            max = lead_1[i];
        }
    }
    for(i = 0; i < lead2conunt; i++)
        {
            if(lead_2[i] > max_2)
            {
                max_2 = lead_2[i];
            }
        }
    if(max > max_2)
    {
        printf("%d %d", 1, max);
    }
    else
    {
        printf("%d %d", 2, max_2);
    }
    return 0;
}

