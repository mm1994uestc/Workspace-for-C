/*int printf("1234")�����ķ���ֵ������ַ����ĸ�������4��int scanf("%d,%d",&a,&b)�����ķ���ֵ�ǳɹ����뵽�����е�
��������ǰ�棬���a��b�ɹ���ֵ���򷵻�2����a����b�ɹ���ֵ�򷵻�1����û�ɹ�=0*/
#include <stdio.h>
void Test0(void);
void Test1(void);
main(void)
{
 Test1();
 return 0;
}
void Test0(void)
{
	char Length=0,F=0,Count=0,Point,i;//�����Point����ΪInt�ͱ��������ִ��󣬷�����ԭ����������ڴ洢�ռ䲻������
 printf("Before enter some number,Please enter the Length of the number\n");
 scanf("%d",&Length);//scanf ��ԭ���ǽ���������ݴ洢��Length����������
 printf("The number's Length is %d\n",Length);
 printf("Now enter the numbers\n");
 for(i=0;;i++)
 {
  Count=scanf("%d",&Point+i);
  F+=Count;
  //printf("%d\n",F);
  if(F==Length) {break;}
 }
 for(F=0;F<Length;F++)
 {
  printf("%d-",*(&Point+Length-F-1));
 }
}
void Test1(void)
{
	char s[3],L,i;
  printf("please enter the length of the string\n");
  scanf("%d",&L);
  printf("please enter the string\n");
  scanf("%s",s);
  for(i=0;i<L;i++)
  {
	  printf("%s",s+i);//�������ʹ�õ����׵�ַ�����ֻҪ�����׵�ַ�Ժ�����й����ַ������ַ������ᱻ��������磺������abcdefg�����Ϊabcdefg
  }
}