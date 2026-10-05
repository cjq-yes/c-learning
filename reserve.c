#include<stdio.h>
int main(){
int num=0;
scanf("%d",&num);
int hundreds=num/100;
int tens=(num/10)%10;
int ones=num%10;
int result=ones*100+tens*10+hundreds*1;
printf("%d",result);
return 0;}
