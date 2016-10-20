/*int printf("1234")函数的返回值是输出字符数的个数，即4个int scanf("%d,%d",&a,&b)函数的返回值是成功输入到变量中的
个数，如前面，如果a，b成功赋值，则返回2，若a或者b成功赋值则返回1，都没成功=0*/
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
	char Length=0,F=0,Count=0,Point,i;//如果将Point定义为Int型变量将出现错误，分析其原因可能是由于存储空间不够？？
 printf("Before enter some number,Please enter the Length of the number\n");
 scanf("%d",&Length);//scanf 的原理是将输入的数据存储在Length变量里面了
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
	  printf("%s",s+i);//由于输出使用的是首地址，因此只要是在首地址以后的所有构成字符串的字符都将会被输出，例如：我输入abcdefg—输出为abcdefg
  }
}