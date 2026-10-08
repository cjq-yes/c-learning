#include<stdio.h> 
int main(){
int num=0;
scanf("%d",&num);
int hundreds=num/100;
int tens=(num%100)/10;
int ones=num%10;
int reserve=ones*100+tens*10+hundreds;
printf("%d",reserve);
return 0;}
