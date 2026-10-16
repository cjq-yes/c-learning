#include<stdio.h>
int main(){
int score=0;
scanf("%d",&score);
printf("您的成绩等级为:");
if (score>=90)
{printf("A\n");
}else if (score>=80){
printf("B\n");}
else if (score>=60){
printf("C\n");}
else{printf("D\n");}
return 0;}

