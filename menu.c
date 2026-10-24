//程序名：菜单循环
//目的：练习do—while
//时间：10.24
#include<stdio.h> 
int main(){
int choice=-1;
do
{printf("1.吃饭 2.睡觉 0.退出\n");
 scanf("%d",&choice);
 if (choice==1)
 {printf(">>走,去食堂干饭\n");}
 else if(choice==2){
 printf(">>晚安,玛卡巴卡.\n");
 }else if(choice!=0){
 printf(">>警告,没有这个选项,请重新选！\n");}
 }while (choice!=0);
 printf("程序结束, 再见！"); 
 return 0;}

