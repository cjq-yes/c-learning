#include<stdio.h> 
int main(){
int choice=0;	
double num1=0.0;
double num2=0.0;
printf("==欢迎使用钢蛋计算器==\n");
printf("1,加法\n");
printf("2,减法\n");
printf("3,乘法\n");
printf("4,除法\n");
printf("请输入您的选择\n");
scanf("%d",&choice);
printf("请输入数字\n");
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
	  if (num2==0.0){printf("错误,除数不能为0\n");
}else{printf("%.2f\n",num1/num2);}
      break;
default:
       printf("输入错误,应输入1-4\n");
       break;}
return 0;}       
       


