#include<stdio.h> 
int main(){
int price=0;
int bill=0;
printf("请输入您的金额(元)：\n");

scanf("%d",&price);
printf("请输入您的票面(元):\n");
scanf("%d",&bill);
if (bill-price>=0){
	printf("应找您%d元.",bill-price);
}
else{printf("您的钱不够");}
return 0;}
