#include <stdio.h>

int main(int argc, const char *argv[])
{
	int year,month,day,hour,min,sec,flag1,flag2;
#if 0
	year = 2021;
	month=1;
	day=8;
	hour=22;
	min=20;
	sec=0;
#endif
	year  = 2021;
	month = 2;
	day   = 28;
	hour  = 23;
	min   = 59;
	sec   = 58;
	if(year<0||month<0||month>12||day<0||day>31){
	
	}
	while(1){
		
		flag1=0;
		flag2=0;
		if(!((year%4==0 && year%100!=0) || year%400==0)
				&& month==2){
			flag1=1;
			if(day == 29){
			printf("时间错误\n");
			return -1;
			}
		}
		if(month==4 || month==6 || month==9 || month==11){
			flag2=1;
		}
		printf("%4d-%02d-%02d %02d:%02d:%02d\n",
				year,month,day,hour,min,sec);
		sleep(1);
		sec++;
		if(sec == 60){
			sec=0;
			min++;
			if(min == 60){
				min=0;
				hour++;
				if(hour == 24){
					hour=0;
					day++;
					if((day==29 && flag1==1) || (day==30 && flag1==0) 
							|| (day==29 && flag2==1) || day==32){
						day=1;
						month++;
						if(month == 13){
							month=1;
							year++;
						}
					}
				}
			}
		}




	}
	return 0;
}
