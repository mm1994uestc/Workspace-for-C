/*
*n阶行列式的计算方法
*/
#include <stdio.h>
#include <math.h>
double detcaculate(double *P,int Order);
int main()
{
    function1();
    #if 0
    int Order=1,i,j;
    double result=0;
    printf("Please enter the matrix order:");
    scanf("%d",&Order);
    printf("\nNow!Please enter the parameter of the Matrix\n");
    double *P=malloc(Order*Order);
    for(i=0;i<Order;i++)
    {
        for(j=0;j<Order;j++)
        {
            printf("Please enter the %d column of Row %d\n",j,i);
            scanf("%e",P+i*Order+j);//将所有的数据存储到申请的内存空间中
        }
    }
    result=detcaculate(P,Order);
    printf("The result is %e",result);
    free(P);
    #endif // 0
    return 0;
}
double detcaculate(double *P,int Order)
{
    int i=0,Order_P=Order,sum=0,n=Order;
    double result=0;
    if(n==0)
    {
        return result;
    }
    else
    {
        if(Order_P==2)
        {

        }
        else
        {
            //detcaculate()
        }
        result+=sum;
        n--;
    }
}

