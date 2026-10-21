#include<stdio.h>
int main(){
int choice=0;
double balance=1000.00;
double cost=0.0;
printf("==欢迎使用迷你收银台==\n");
printf("1 录入一笔消费\n");
printf("2 查看余额\n") ;
printf("3 退出\n");
printf("请输入您的选择:(1-3)\n");
scanf("%d",&choice);
switch (choice){
case 1:
	printf("请输入消费金额");
	scanf("%lf",&cost) ;
if (cost>balance){
    printf("余额不足,当前余额为:%2f\n");}
else if (cost<=0){
    printf("输入金额必须大于0!\n");}
else {balance=balance-cost; 
printf("消费成功!已扣款%.2f元.剩余余额:%.2f元.\n",cost,balance);}
     break;
case 2:
    printf("您的余额为:%.2f元\n") ;
	break;
case 3:
    printf("感谢使用,再见!");
	break;
default	:
	printf(" 输入错误,只能输入1-3\n") ;
	break;}
return 0;}	 

		
	
	
	
 
  
