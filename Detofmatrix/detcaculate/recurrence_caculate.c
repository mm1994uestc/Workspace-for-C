//编译不通过的伪代码，讲了实现的方式
#if 0
#include<stdio.h>
double function2(double matrix[][],int n)
{
    int i=0;
    double matrix1[][];
    if(n==1)
    {
        return result;
    }else
    {
        for(i=0;i<n;i++)
        {
            matrix1[][]=matric[][]//切割矩阵
            if(i%2==0)
            {
                k=1;
            }else
            {
                k=-1;
            }
            sum+=k*matrix[0][i]*function2(matrix1,n-1);
        }
        return sum;
    }
}
#endif
