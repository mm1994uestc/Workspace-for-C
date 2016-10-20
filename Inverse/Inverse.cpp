/*实在是不想用数组来解决这个问题，应为会消耗过多的资源*/
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
    printf("%X\n",DATA);//DATA输出之后是确定的地址位置109的地址位置
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