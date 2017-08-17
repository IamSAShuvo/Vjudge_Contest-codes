#include <stdio.h>

int main()
{
    int p1[5] = {5, 3, 4, 2, 30}, p2[5] = {8, 4, 3, 6, 10};
    int total_1[5], total_2[5], i, max, max_2, lead_1[5], lead_2[5];
    int sum_p1 = 0;
    int sum_p2 = 0;
    for(i = 0; i < 5; i++)
    {
       sum_p1 = sum_p1 + p1[i];
       total_1[i] = sum_p1;
        printf("%d\n", total_1[i]);
    }
    printf("\n");

    for(i = 0; i < 5; i++)
    {
        sum_p2 = sum_p2 + p2[i];
        total_2[i] = sum_p2;
        printf("%d\n", total_2[i]);
    }
    printf("\n");
    int lead1conunt = 0, lead2conunt = 0;
    for(i = 0; i < 5; i++)
    {
        if(total_1[i] > total_2[i])
        {
            lead_1[i] = total_1[i] - total_2[i];
            printf("Lead_1: %d\n", lead_1[i]);
            lead1conunt;
        }
        else
        {
            lead_2[i] = total_2[i] - total_1[i];
            printf("Lead_2: %d\n", lead_2[i]);
            lead2conunt++;
        }


    }
    for(i = 0; i < lead1conunt; i++)
    {
        if(lead_1[i] > lead_1[0])
        {
            lead_1[0] = lead_1[i];
            max = lead_1[0];
        }
    }
    printf("Max: %d\n", max);
    for(i = 0; i < lead2conunt; i++)
        {
            if(lead_2[i] > lead_2[0])
            {
                lead_2[0] = lead_2[i];
                max_2 = lead_2[0];

            }
        }
        printf("Max_2: %d\n", max_2);



    return 0;
}
