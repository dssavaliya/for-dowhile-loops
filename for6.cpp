#include<stdio.h>
int main()
{

    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    for(n;n>=1;n--)
    {
        if(n % 2 == 0)
    printf("%d\n",n);
    
    }

    return 0;
}
