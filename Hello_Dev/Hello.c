#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAX_COLS 20 /*max length of array*/
#include "Information.h"
/*以上4行称作预处理指令，由预处理器解释*/
//getchar() func return back EOF when meet the end of files
//strchr
//strstr
//strcpy
//strncpy
//strcat

//\a警告字符。他将奏响终端铃声或者产生其他一些可听见可看见的信号
//\b退格键 
//\f进纸字符，换页符，用下一页来显示 
//\n换行符 
//\r回车符 
//\t水平制表符 
//\v垂直制表符 
//\ddd1~3八进制数字 
//\xddd十六进制数字 
int main(void)
{
	#if 0 
	int A,B,SUM,len;
	char String0[]={"My name is mamiao "};
	char String1[]={"Vectory!\n"};
	strcat(String0,String1);
	
	len=strlen("My name is mamiao\n");//strlen 函数 
	printf("The length of String is %d\n",len);
	printf("%s",String0);
	printf("Hello world!\n");
	scanf("%d %d",&A,&B);
	printf("Delete file (Are you sure ?)\n");
	printf("\\a  \\b  \\f  \\n  \\r  \\t  \\v\n");//转义字符方法，前面加上 \ 
	SUM=A+B;
	printf("The number is :%d+%d=%d",A,B,SUM);
	//printf("\"Blunder??!??\"\n");//三字母词trigrph 
	printf("\x40 beyond-光辉岁月"); 
	#endif
	Printf_MyVersion();
	unsigned long int const DATA=10ul;//named constant that can not be changed by programmer
	enum {CPU,GPU,MCU,MMU} DSP,FPGA,CPLD;//枚举型变量，这种变量实际上以整形的方式存储，这里CPU是0，GPU是1 以此类推，当然，你也可以指定枚举变量的大小 如：enum {CPU=0,GPU=9,MCU=3,MMU=4} DSP=2,FPGA=6,CPLD=8; 
	long int A=2;
	char *message="Hello world!\n";//申明一个指针，指向字符串的首地址
	printf("%s",message); 
	A*=DATA;
	printf("%d\n",A); 
	int C='D';
	printf("%d",C);
}
