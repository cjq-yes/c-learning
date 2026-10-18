#include<stdio.h>
int main(){
int num1=0;
int num2=0;
scanf("%d %d",&num1,&num2);
printf("和:%d",num1+num2);
printf("差:%d",num1-num2);
printf("积:%d",num1*num2);
printf("商:%.2f",(double)num1/num2);
printf("余数:%d",num1%num2);
return 0;}
