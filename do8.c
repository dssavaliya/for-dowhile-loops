#include<stdio.h>
int main()
{

    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    int i=1;
    int sum=0;
    do
    {
    sum += i;
    i++;
    }while(i<=n);
    printf("Sum = %d\n",sum);

    return 0;
}
