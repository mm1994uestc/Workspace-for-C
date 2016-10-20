#include <stdio.h>
bool is_Leap_Year(int Year);
void Num_of_Today(int Year,int Month,int Date);
main(void)
{
	int Year,Month,Date;
 printf("please enter a Year\n");
 scanf("%d,%d,%d",&Year,&Month,&Date);
 if(is_Leap_Year(Year)) {printf("This Year %d is a Leap Year\n",Year);}
 else {printf("This Year %d is not a Leap Year\n",Year);}
 printf("%d,%d,%d\n",Year,Month,Date);
 Num_of_Today(Year,Month,Date);
 return 0;
}
bool is_Leap_Year(int Year)//»ÚƒÍ≈–∂œ∑Ω∑®
{
    if((Year%100!=0)&&(Year%4==0)) {return true;}
	 else if((Year%100==0)&&(Year%400==0)) {return true;}
	    else {return false;}
}
void Num_of_Today(int Year,int Month,int Date)
{
	int Sum=0,i=0;
	int Month_Day[12]={31,28,31,30,31,30,31,30,31,30,31,30}; 
	if(is_Leap_Year(Year)) {Month_Day[1]=29;}
	else {Month_Day[1]=28;}
 for(i=0;i<Month-1;i++)
 {
  Sum+=Month_Day[i];
 }
 Sum+=Date;
 printf("%d\n",Sum);
}