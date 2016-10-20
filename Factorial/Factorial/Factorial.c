#include <stdio.h>
int Factorial(int n);
int main()
{
    int n=1,result=0;
    printf("Please enter a number:");
    scanf("%d",&n);
    result=Factorial(n);
    printf("\nThe result is %d",result);
}
int Factorial(int n)
{
    int result=0,Temp=1;
    if(n==1)
    {
        return Temp;
    }else
    {
        result=n*Factorial(n-1);
    }
    return result;
}
