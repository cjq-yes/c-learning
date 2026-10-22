#include<stdio.h>
int main(){
int op=0;
double balance=1000.00;
double cost=0.0;
printf("==欢迎使用钢蛋收银台==\n");
printf("1  录入一笔消费\n");
printf("2 查看余额\n");
printf("3 退出\n");
printf("请输入您的选择\n");
scanf("%d",&op);
switch (op){
case 1:
	printf("请输入您的金额:\n");
	scanf("%lf",&cost);
if (cost>1000.00){
      printf("错误,您的余额不足!");
}else if (cost<=0.0){
      printf("输入错误\n");
}else{
      balance=balance-cost;
      printf("已花费%.2f元,还剩下%.2f元\n",cost,balance);
      break;}
case 2:
      printf("您的余额为 :%.2f\n",balance) ;
	  break;
case 3:
	  printf("谢谢您的使用,再见!\n") ;}
return 0;}	  
	      
      
	

