#include<stdio.h> 
int main(){
//初始化 
int price=0;
int bill=0;
//读入金额和票面 
printf("请输入您的金额.\n");
fflush(stdout);
scanf("%d",&price);
printf("请输入票面.\n");
fflush(stdout);
scanf("%d",&bill);
//计算找零
if (bill>=price){
	//钱够：正常找零 
printf("应该找您元%d\n",bill-price);}else
{
	//钱不够
	 
printf("您的钱不够，还差%d元\n",price-bill);}
return 0;}
