#include<stdio.h> 
int main(){
int start_time=0;
int passed_minute=0;
scanf("%d %d",&start_time,&passed_minute);
int start_total=(start_time/100)*60+start_time%100;
int end_total=start_total+passed_minute;
int end_time=end_total/60*100+end_total%60;
printf("%d\n",end_time);
return 0;}
