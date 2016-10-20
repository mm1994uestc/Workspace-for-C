/*素数个数的求解方法*/
#include <stdio.h>
#include <math.h>
bool is_Prime(int Num);
main(void)
{
	int DATA,Flag,Count=0;
 printf("please enter a nmuber\n");
 scanf("%d",&DATA);
 for(Flag=1;Flag<=DATA;Flag++)
 {
	 if(is_Prime(Flag)) {Count++;printf("%d is a PrimeNum rank %d\n",Flag,Count);}
	 else {printf("%d is not a PrimeNum\n",Flag);}
 }
 printf("The total of the prime number is %d\n",Count);
 return 0;
}
bool is_Prime(int Num)
{
 int K=sqrt(Num),i=2;
 for(i=2;i<=K;i++)
 {
	 if((Num%i)==0) {return false;break;}
 }
 if(i==(K+1)) {return true;}
}