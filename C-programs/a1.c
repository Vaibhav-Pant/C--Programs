// Prime, armstrong,Perfect number

#include<stdio.h>
#include<string.h>
#include<math.h>
void prime(int num)
{
    int ans = 1;
    if(num == 2)
    {
        printf("\n%d is Prime.", num);
    }
    else
    {
        for(int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                ans = 0;
                break;
            }
        }
    }
    if(ans){
        printf("\n%d is prime.",num);
    }
    else{
        printf("\n%d is not prime.",num);
    }
    return;
}

void armstrong(int num)
{
    int sum = 0;
    int length = 0;
    int a = num;
    while (a != 0)
    {
        a = a/10;
        length += 1;
    }
    int i = 0;
    while(i < length)
    {
        sum += pow(num%10,length);
        i+=1;
    }
    if (sum == num)
    {
        printf("\n%d is armstrong number.",num);
    }
    else
    {
        printf("\n%d is not armstrong number.",num);
    }
    return;
}

void perfect_num(int num)
{
    int sum = 1;
    for(int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("\n%d is a perfect number.",num);
    }
    else
    {
        printf("\n%d is not a perfect number.",num);
    }
    return;
}

int main()
{
    int num;
    scanf("%d",&num);
    prime(num);
    armstrong(num);
    perfect_num(num);
    return 0;
}
