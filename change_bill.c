#include<stdio.h> 
int main(){
double price=0.0;
double bill=0.0;
printf("请输入您的金额:");
scanf("%lf",&price);
printf("请输入您的票面:");
scanf("%lf",&bill);
double result=bill-price;
printf("应找零%.2f",result);
int num_50=result/50;
result=result-num_50*50;
int num_10=result/10;
result=result-num_10*10;
int num_1=result/1;
result=result-num_1;
int num_jiao=result*10;
printf("应找您%d张50元,%d张10元,%d张1元,%d角\n",num_50,num_10,num_1,num_jiao);
return 0;}
