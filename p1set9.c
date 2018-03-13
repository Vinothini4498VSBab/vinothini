#include <stdio.h>
int main()
{
    int low1, high, i, flag;
    scanf("%d %d", &low1, &high);
   while (low1< high)
    {
        flag = 0;

        for(i = 2; i <= low1/2; ++i)
        {
            if(low1 % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low1);

        ++low1;
    }

    return 0;
}
