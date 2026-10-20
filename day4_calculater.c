#include<stdio.h>
int main(){
int choice=0;
double num1=0;  double num2=0;
printf("1.加法 2.减法 3.乘法 4.除法\n");
printf("请输入选择:");
scanf("%d",&choice);
printf("请输入两个数字:");
scanf("%lf %lf",&num1,&num2);
switch (choice){
case 1:
	printf("%.2f\n",num1+num2);
	break;
case 2:
	printf("%.2f\n",num1-num2);
	break;
case 3:
	printf("%.2f\n",num1*num2);
	break;
case 4:
	if (num2==0)
	{printf("错误,除数不能为零！"); 
}else {printf("%.2f",num1/num2);}
    break;
default:
	printf("输入错误,只能选1-4\n");
	break;}
return 0;}

