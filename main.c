#include <stdio.h>

int checkPerfectNumbers(int num)
{
    int i, total=0;
    for(i=1; i<num; i++)
    {
        if(num%i == 0)
            total += i;
    }
    if(total == num)
        return 1;
    else
        return 0;
}

void perfect(int lowest, int highest)
{
    while(lowest <= highest)
    {
        if(checkPerfectNumbers(lowest))
            printf("%d ", lowest);

        lowest++;
    }

}

int main()
{
    int low, high;

    printf("Input lowest limit: ");
    scanf("%d", &low);
    printf("Input highest limit: ");
    scanf("%d", &high);

    printf("\nThe Perfect numbers between %d to %d: ", low, high);
    perfect(low, high);

    return 0;
}

/*for(i=1; i<=high; i++)
    {
        if(high%i == 0)
        {
            array[k] = i;
            total += array[k];
            if(total == high)
                for(int t=0; t<=k; t++)
            {
                printf("%d", array[k]);
                high--;
            }
            k++;
        }
    }
    printf("\n");*/

    /*while(i<high)
    {
        if(high%i == 0)
        {
            array[k] = i;
            total = total+i;
            if(total==high)
            {
                for(int t=0; t<=k; t++)
                {
                    printf("%d", array[k]);
                    high--;
                }
            }i++;k++;
        }
    }*/
