/*以下程序用来解决Josephus问题,现在只是完成了M>N的情况，2015-08-20 22:22:20*/
/*发现一个问题：数组的赋值问题：char People[N]={1};并不代表所有的元素都是1啊，要确保全都是1，务必使用char People[N]={1,1,1,1};或者采用循环给数组赋值*/
#include <stdio.h>
#include <math.h>
#define N 6 //the number of people
#define M 5 //the increasement of the rule
main(void)
{
	char p,People[N];//1 means alive 0 means died
	for(p=0;p<N;p++)//循环赋值确保每个人在初始状态都活着
	{
	 People[p]=1;
	}
	int Last=N,j=0,k=0,Temp=0;//Last is the ending loop of while
	if(M>N)//判断M和N之间的关系
  {
	while(Last!=0)
	{
			j=(M%Last)-1;//需要从当前的值移动的总次数（要排除掉已经为0的元素）
			if(j>0)
            {
			 for(k=1;k<=j;)
			 {
				Temp++;    //当前的值自加得到下一次的数组元素值
				if(Temp>N-1) {Temp=0;}
				if(People[Temp]!=0) {k++;}     //如果下一个元素的值为0 ，那么k就不会变化
			 } 
			}
			else 
			{
			 for(k=1;k<=abs(j);)
			 {
				Temp--;    //当前的值自减得到下一次的数组元素值
				if(Temp<0) {Temp=N-1;}
				if(People[Temp]!=0) {k++;}     //如果下一个元素的值为0 ，那么k就不会变化
			 } 			 
			}
		    printf("People rank %d is died\n",Temp+1);
			k=Temp+1;
			for(k;People[k]==0;k++)//要确定下一个其实元素的值，下一个元素的值不能是0，而是第一个1
			{
				if(k>N-1) {k=0;}  //倘若k大于N-1时，就需要将k赋值为0避免溢出
			}
			Temp=k;
			Last--; //活着的人数减少
	}
  }
  else 
  {
	  while(Last!=0)//N4 M2
	  {
			 for(k=1;k<=M-1;)
			 {
				Temp++;    //当前的值自加得到下一次的数组元素值
				if(Temp>N-1) {Temp=0;}
				if(People[Temp]!=0) {k++;}     //如果下一个元素的值为0 ，那么k就不会变化
			 }   
			 People[Temp]=0;  //将序号为Temp+1的人置为死亡状态
             printf("People rank %d is died\n",Temp+1);
			 k=Temp+1; if(k>=N) {k-=N;} //防止k溢出
             for(k;People[k]==0;k++) //寻找下一个且第一个不为0（活着的）的People
			 {
				 if(k>N-1) {k=0;}
			 }
			 Temp=k;
			 k=1;
			 Last--; //活着的人数减少
	  }
  }
 return 0;
}