/*输入三个数从小到大输出*/
#include <stdio.h>
main(void)
{
	int Num[3],i,j,F;
 printf("Please enter three number\n");
 scanf("%d,%d,%d",&Num[0],&Num[1],&Num[2]);
 printf("Before Ranking:\n");
 for(i=0;i<3;i++) {printf("%d",Num[i]);}
 printf("\n");
 for(i=0;i<2;i++)
 {
  for(j=i+1;j<=2;j++)
  {
	  if(Num[i]>Num[j]) {F=Num[j]; Num[j]=Num[i]; Num[i]=F;}
  }
 }
 printf("After Ranking:\n");
  for(i=0;i<3;i++) {printf("%d,",Num[i]);}
 return 0;
}