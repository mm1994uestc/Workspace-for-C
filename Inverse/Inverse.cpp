/*ʵ���ǲ��������������������⣬ӦΪ�����Ĺ������Դ*/
#include <stdio.h>
#include <string.h>
char strlen_MM(char *s);
main(void)
{
	char i;
	char DATA=108,Num=0;//
	printf("please input a String\n");
	scanf("%s",&DATA);
	printf("%s\n",&DATA);
    printf("%X\n",DATA);//DATA���֮����ȷ���ĵ�ַλ��109�ĵ�ַλ��
	Num=strlen_MM(&DATA);
    char *P=&DATA+Num-1;
	for(i=0;i<Num;i++)
	{
		printf("%c",*(P-i));
	}
     printf("\n");
	 printf("%d",Num);
 return 0;
}
char strlen_MM(char *s)
{
	int i=0;
 while(*(s+i))
 {
	 i++;
 }
 return i;
}