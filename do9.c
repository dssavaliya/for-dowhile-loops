#include<stdio.h>
int main()
{

    int n;
    printf("Enter Number :");
    scanf("%d", &n);

    int fact=1;
     do   
    {
    fact = fact*n;
    n--;
    } while(n>=1);
    
    printf("Final Factorial = %d\n",fact);

    return 0;
}
