/*������Ѷ��һ�������⣬���ǿ��Ծ�һ������д�����׵�������Routes�ȵȣ�*/
/*����ע�⣺���ݵĿռ��Сѡ��һ��Ҫ���ʣ�̫���˷ѿռ䣬̫С��������벻����Ч������*/
#include <stdio.h>
//#include <math.h>
#define L 8
unsigned long int Pow_MM(int x,int y);
main(void)
{
 unsigned long int Route_Beg=Pow_MM(2,L)-1,Route_End=Pow_MM(2,2*L)-Route_Beg-1;//���ﾡ������С�˳����·��Ѱ�ҷ�Χ����8��1����8��0������������Route_Beg-Route_End֮��
 printf("%d\n",Route_Beg); printf("%d\n",Route_End);
 unsigned long int Compare=0x0001,Count=0;
 unsigned long int i,j,Bit;//�����Ĵ�Сһ��Ҫ�㹻��Ŷ����
 for(i=Route_Beg;i<=Route_End;i++)//��һ����Χ��Ѱ���������������ݣ�Route_Beg-Route_End֮��
 {
	 Bit=0; 
  for(j=0;j<2*L;j++)
  {
	  if(i&(Compare<<j)) {Bit++;}//��¼i��ֵ�����ж��ٸ�1
  }
  if(Bit==8) {Count++;}//�����ж��ٸ�·��
 }
 printf("%d\n",Count);
 return 0;
}
unsigned long int Pow_MM(int x,int y)//�Զ���Ĵη���������math.h�ļ����ṩ��double pow��double x,double y�������Ĳ���������double�͵ģ���δ����
{
	int i;
  unsigned long int mi=1;
  for(i=1;i<=y;i++)
  {
	  mi=mi*x;
  }
 return mi;
}