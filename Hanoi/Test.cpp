/*
 根据圆盘的数量确定柱子的排放顺序：若n为偶数，按顺时针方向依次摆放 A B C；
 若n为奇数，按顺时针方向依次摆放 A C B。
 ⑴按顺时针方向把圆盘1从现在的柱子移动到下一根柱子，即当n为偶数时，若圆盘1在柱子A，则把它移动到B；若圆盘1在柱子B，则把它移动到C；若圆盘1在柱子C，则把它移动到A。
 ⑵接着，把另外两根柱子上可以移动的圆盘移动到新的柱子上。即把非空柱子上的圆盘移动到空柱子上，当两根柱子都非空时，移动较小的圆盘。这一步没有明确规定移动哪个圆盘，
   你可能以为会有多种可能性，其实不然，可实施的行动是唯一的。
 ⑶反复进行⑴⑵操作，最后就能按规定完成汉诺塔的移动。
 所以结果非常简单，就是按照移动规则向一个方向移动金片：如3阶汉诺塔的移动：A→C,A→B,C→B,A→C,B→A,B→C,A→C                                                   */
#include <stdio.h>
#include <math.h>
void hanoi(int n,char A,char B,char C)//采用递归的方法实现汉诺塔问题的步骤
{
	printf("%d %c %c %c\n",n,A,B,C);
  if(n==1)//递归终止条件，当n=1的时候，必然的有步骤A-C一步完成汉诺塔的移动
 {
  printf("Movedisk%dfrom%cto%cL\n",n,A,C);
 }
  else
 {
  hanoi(n-1,A,C,B); //A-B
  printf("Movedisk%dfrom%cto%cH\n",n,A,C);
  hanoi(n-1,B,A,C); //B-C
 }
}     //递归函数的变量会一直存储下来，而且一直不变，保持到递归函数调用完成
main()
{
 int n,sum;
 printf("请输入数字n以解决n阶汉诺塔问题：\n");
 scanf("%d",&n);           //输入汉诺塔的阶数
 hanoi(n,'A','B','C');     //递归调用hanoi函数完成步骤的输出
 sum=pow(2,n)-1;           //计算移动的总次数
 printf("%d阶的汉诺塔总共需要的移动的步骤总数是%d\n",n,sum);     //求解汉诺塔移动步骤的总数sum
 return 0;
}