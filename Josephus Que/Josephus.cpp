/*���³����������Josephus����,����ֻ�������M>N�������2015-08-20 22:22:20*/
/*����һ�����⣺����ĸ�ֵ���⣺char People[N]={1};�����������е�Ԫ�ض���1����Ҫȷ��ȫ����1�����ʹ��char People[N]={1,1,1,1};���߲���ѭ�������鸳ֵ*/
#include <stdio.h>
#include <math.h>
#define N 6 //the number of people
#define M 5 //the increasement of the rule
main(void)
{
	char p,People[N];//1 means alive 0 means died
	for(p=0;p<N;p++)//ѭ����ֵȷ��ÿ�����ڳ�ʼ״̬������
	{
	 People[p]=1;
	}
	int Last=N,j=0,k=0,Temp=0;//Last is the ending loop of while
	if(M>N)//�ж�M��N֮��Ĺ�ϵ
  {
	while(Last!=0)
	{
			j=(M%Last)-1;//��Ҫ�ӵ�ǰ��ֵ�ƶ����ܴ�����Ҫ�ų����Ѿ�Ϊ0��Ԫ�أ�
			if(j>0)
            {
			 for(k=1;k<=j;)
			 {
				Temp++;    //��ǰ��ֵ�Լӵõ���һ�ε�����Ԫ��ֵ
				if(Temp>N-1) {Temp=0;}
				if(People[Temp]!=0) {k++;}     //�����һ��Ԫ�ص�ֵΪ0 ����ôk�Ͳ���仯
			 } 
			}
			else 
			{
			 for(k=1;k<=abs(j);)
			 {
				Temp--;    //��ǰ��ֵ�Լ��õ���һ�ε�����Ԫ��ֵ
				if(Temp<0) {Temp=N-1;}
				if(People[Temp]!=0) {k++;}     //�����һ��Ԫ�ص�ֵΪ0 ����ôk�Ͳ���仯
			 } 			 
			}
		    printf("People rank %d is died\n",Temp+1);
			k=Temp+1;
			for(k;People[k]==0;k++)//Ҫȷ����һ����ʵԪ�ص�ֵ����һ��Ԫ�ص�ֵ������0�����ǵ�һ��1
			{
				if(k>N-1) {k=0;}  //����k����N-1ʱ������Ҫ��k��ֵΪ0�������
			}
			Temp=k;
			Last--; //���ŵ���������
	}
  }
  else 
  {
	  while(Last!=0)//N4 M2
	  {
			 for(k=1;k<=M-1;)
			 {
				Temp++;    //��ǰ��ֵ�Լӵõ���һ�ε�����Ԫ��ֵ
				if(Temp>N-1) {Temp=0;}
				if(People[Temp]!=0) {k++;}     //�����һ��Ԫ�ص�ֵΪ0 ����ôk�Ͳ���仯
			 }   
			 People[Temp]=0;  //�����ΪTemp+1������Ϊ����״̬
             printf("People rank %d is died\n",Temp+1);
			 k=Temp+1; if(k>=N) {k-=N;} //��ֹk���
             for(k;People[k]==0;k++) //Ѱ����һ���ҵ�һ����Ϊ0�����ŵģ���People
			 {
				 if(k>N-1) {k=0;}
			 }
			 Temp=k;
			 k=1;
			 Last--; //���ŵ���������
	  }
  }
 return 0;
}