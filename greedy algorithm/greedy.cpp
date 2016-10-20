/*以下程序大概示例了一下贪婪算法的实现方法*/
/*尝试使用了一下递归算法，有点bug，当分式的分子分母太大的时候，程序跑飞了！！！还要解决！*/
#include <stdio.h>
void Divide(int *B_NUM);
main(void)
{
	int B_NUM[2];//NUM[0] is the top whether NUM[1] is the buttom
	printf("Please enter a number\n");
	scanf("%d,%d",&B_NUM[0],&B_NUM[1]);
	printf("Before Divide the numbr is %d/%d\n",B_NUM[0],B_NUM[1]); //输入分子NUM【0】和分母NUM【1】
    printf("After Divide the numbr is:\n");
    Divide(B_NUM); //调用函数Divide（）
 return 0;
}
void Divide(int *B_NUM)
{
	int R=0,Q=0;
	R=(*(B_NUM+1))%(*B_NUM); //求出b%a的余数R
	Q=((*(B_NUM+1))-R)/(*B_NUM); //求出b/a的商Q
    *B_NUM-=R; //求解分解一次之后所得到的分子a-=R
    *(B_NUM+1)=(Q+1)*(*(B_NUM+1)); //求解分解一次之后所得到的分母b=（Q+1）*b
	printf("1/%d+",Q+1); //将结果输出出来
	if((*B_NUM)==1) {printf("1/%d",*(B_NUM+1));return;} //递归调用的终止条件 即分解之后得到的a==1时终止调用
	Divide(B_NUM); //递归调用函数Divide（）
}