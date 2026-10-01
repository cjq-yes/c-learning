#include <stdio.h> 
int main(){
double r=0;
printf("请输入圆的半径:");
scanf("%lf",&r);
double c=2*3.14159*r;
double s=3.14159*r*r;
printf("圆的周长为%.2f,圆的面积为%.2f",c,s);
return 0;}
