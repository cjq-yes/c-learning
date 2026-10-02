#include <stdio.h>
int main(){
double a=0;
double b=0;
printf("请输入两个数字:");
scanf("%lf %lf",&a,&b);
double c;
c=(a+b)/2.0;
printf("平均数为%.2f\n",c);
return 0;}
