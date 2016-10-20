/*来自腾讯的一道面试题，我们可以举一反三，写出三阶的正方体Routes等等！*/
/*调试注意：数据的空间大小选择一定要合适，太大浪费空间，太小会出现意想不到的效果！！*/
#include <stdio.h>
//#include <math.h>
#define L 8
unsigned long int Pow_MM(int x,int y);
main(void)
{
 unsigned long int Route_Beg=Pow_MM(2,L)-1,Route_End=Pow_MM(2,2*L)-Route_Beg-1;//这里尽量地缩小了程序的路线寻找范围，将8个1而且8个0的情形限制在Route_Beg-Route_End之间
 printf("%d\n",Route_Beg); printf("%d\n",Route_End);
 unsigned long int Compare=0x0001,Count=0;
 unsigned long int i,j,Bit;//变量的大小一定要足够大哦！！
 for(i=Route_Beg;i<=Route_End;i++)//在一定范围内寻找满足条件的数据：Route_Beg-Route_End之间
 {
	 Bit=0; 
  for(j=0;j<2*L;j++)
  {
	  if(i&(Compare<<j)) {Bit++;}//记录i数值当中有多少个1
  }
  if(Bit==8) {Count++;}//计数有多少个路线
 }
 printf("%d\n",Count);
 return 0;
}
unsigned long int Pow_MM(int x,int y)//自定义的次方函数，在math.h文件中提供的double pow（double x,double y）函数的参数类型是double型的，故未采用
{
	int i;
  unsigned long int mi=1;
  for(i=1;i<=y;i++)
  {
	  mi=mi*x;
  }
 return mi;
}