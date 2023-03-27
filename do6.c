#include<stdio.h>
int main()
{

    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    do
    {
        if(n % 2 == 0)
    printf("%d\n",n);
    n--;
    }while(n>=1);

    return 0;
}
