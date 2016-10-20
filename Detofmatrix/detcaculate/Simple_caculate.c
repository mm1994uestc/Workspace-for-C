#include<stdio.h>
extern int function1()
{
    double detA,Matrix[3][3]={{1,2,1},{4,2,6},{7,8,4}};
    int i,j,Order=3;
    for(i=0;i<Order;i++)
    {
        for(j=0;j<Order;j++)
        {
            printf("Please enter the %d column of Row %d\n",j,i);
            scanf("%e",&Matrix[i][j]);//将所有的数据存储到申请的内存空间中
        }
    }
    detA=Matrix[0][0]*(Matrix[1][1]*Matrix[2][2]-Matrix[1][2]*Matrix[2][1]) -
         Matrix[0][1]*(Matrix[1][0]*Matrix[2][2]-Matrix[2][0]*Matrix[1][2]) +
         Matrix[0][2]*(Matrix[1][0]*Matrix[2][1]-Matrix[2][0]*Matrix[1][1]);
         printf("The detA is equal to %e",detA);
    return 0;
}
