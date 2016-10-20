/*冒泡排序法的实现*/
#include <stdio.h>
#define N 10
main()
{
	char NUM[N]={1,3,7,2,4,1,8,6,3,4},i,j;
	char Temp;
	for(i=0;i<N;i++)
	{
	 for(j=i;j<N;j++)
	 {
		 if(NUM[i]>NUM[j]) {Temp=NUM[j]; NUM[j]=NUM[i]; NUM[i]=Temp;}
	 }
	}
	for(i=0;i<N;i++)
	{
		printf("%d",NUM[i]);
	}
}