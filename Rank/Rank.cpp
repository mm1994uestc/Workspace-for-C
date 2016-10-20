/*求数字中得最大值和最小值*/
#include <stdio.h>
#include <string.h>
#define N 10
char min_MM(char A,char B);
char max_MM(char A,char B);
main(void)
{
	char NUM[N]={9,4,5,6,3,6,7,3,7,9};
	char i,max=NUM[0],min=NUM[0],min_N,max_N;
    for(i=0;i<N;i++)
	{
     max=max_MM(max,NUM[i]);
	 if(max==NUM[i]) {max_N=i;}
	 min=min_MM(min,NUM[i]);
	 if(min==NUM[i]) {min_N=i;}
	}
    printf("%d",max_N);
	printf("%d\n",max);
    printf("%d",min_N);
	printf("%d\n",min);
 return 0;
}
char min_MM(char A,char B)
{
 char Temp=0;
 if(A>B) {Temp=B;}
 else {Temp=A;}
 return Temp;
}
char max_MM(char A,char B)
{
 char Temp=0;
 if(A>B) {Temp=A;}
 else {Temp=B;}
 return Temp; 
}