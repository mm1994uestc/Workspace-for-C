/*���³�����ʾ����һ��̰���㷨��ʵ�ַ���*/
/*����ʹ����һ�µݹ��㷨���е�bug������ʽ�ķ��ӷ�ĸ̫���ʱ�򣬳����ܷ��ˣ�������Ҫ�����*/
#include <stdio.h>
void Divide(int *B_NUM);
main(void)
{
	int B_NUM[2];//NUM[0] is the top whether NUM[1] is the buttom
	printf("Please enter a number\n");
	scanf("%d,%d",&B_NUM[0],&B_NUM[1]);
	printf("Before Divide the numbr is %d/%d\n",B_NUM[0],B_NUM[1]); //�������NUM��0���ͷ�ĸNUM��1��
    printf("After Divide the numbr is:\n");
    Divide(B_NUM); //���ú���Divide����
 return 0;
}
void Divide(int *B_NUM)
{
	int R=0,Q=0;
	R=(*(B_NUM+1))%(*B_NUM); //���b%a������R
	Q=((*(B_NUM+1))-R)/(*B_NUM); //���b/a����Q
    *B_NUM-=R; //���ֽ�һ��֮�����õ��ķ���a-=R
    *(B_NUM+1)=(Q+1)*(*(B_NUM+1)); //���ֽ�һ��֮�����õ��ķ�ĸb=��Q+1��*b
	printf("1/%d+",Q+1); //������������
	if((*B_NUM)==1) {printf("1/%d",*(B_NUM+1));return;} //�ݹ���õ���ֹ���� ���ֽ�֮��õ���a==1ʱ��ֹ����
	Divide(B_NUM); //�ݹ���ú���Divide����
}