#include <stdio.h>
int main(){
int total=0;
printf("请输入您的总秒数(秒):")	;
scanf("%d",&total);
int hour=total/3600;
int minute=(total%3600)/60;
int second=total%60;

printf("%d小时%d分钟%d秒.",hour,minute,second);
return 0;}
