#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAX_COLS 20 /*max length of array*/
#include "Information.h"
/*����4�г���Ԥ����ָ���Ԥ����������*/
//getchar() func return back EOF when meet the end of files
//strchr
//strstr
//strcpy
//strncpy
//strcat

//\a�����ַ������������ն��������߲�������һЩ�������ɿ������ź�
//\b�˸�� 
//\f��ֽ�ַ�����ҳ��������һҳ����ʾ 
//\n���з� 
//\r�س��� 
//\tˮƽ�Ʊ�� 
//\v��ֱ�Ʊ�� 
//\ddd1~3�˽������� 
//\xdddʮ���������� 
int main(void)
{
	#if 0 
	int A,B,SUM,len;
	char String0[]={"My name is mamiao "};
	char String1[]={"Vectory!\n"};
	strcat(String0,String1);
	
	len=strlen("My name is mamiao\n");//strlen ���� 
	printf("The length of String is %d\n",len);
	printf("%s",String0);
	printf("Hello world!\n");
	scanf("%d %d",&A,&B);
	printf("Delete file (Are you sure ?)\n");
	printf("\\a  \\b  \\f  \\n  \\r  \\t  \\v\n");//ת���ַ�������ǰ����� \ 
	SUM=A+B;
	printf("The number is :%d+%d=%d",A,B,SUM);
	//printf("\"Blunder??!??\"\n");//����ĸ��trigrph 
	printf("\x40 beyond-�������"); 
	#endif
	Printf_MyVersion();
	unsigned long int const DATA=10ul;//named constant that can not be changed by programmer
	enum {CPU,GPU,MCU,MMU} DSP,FPGA,CPLD;//ö���ͱ��������ֱ���ʵ���������εķ�ʽ�洢������CPU��0��GPU��1 �Դ����ƣ���Ȼ����Ҳ����ָ��ö�ٱ����Ĵ�С �磺enum {CPU=0,GPU=9,MCU=3,MMU=4} DSP=2,FPGA=6,CPLD=8; 
	long int A=2;
	char *message="Hello world!\n";//����һ��ָ�룬ָ���ַ������׵�ַ
	printf("%s",message); 
	A*=DATA;
	printf("%d\n",A); 
	int C='D';
	printf("%d",C);
}
