#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=0,i=0,j=0,count=0;
    printf("Please Enter a Number :");
    scanf("%d",&N);
    char A[N];
    A[0]=0;
    for(i=1;i<N;i++)
    {
        A[i]=1;
    }
    for(i=2;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(j%i==0) A[j]=0;
        }
    }
    for(i=0;i<N;i++)
    {
        if(A[i]==1)
        {
            printf("The prime number is %d\n",i);
            count++;
        }
    }
    printf("The totally number of primes is %d",count);
    return 0;
}
