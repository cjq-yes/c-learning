#include<stdio.h>
int main(){
const int pass=60;
int score=0;
printf("请输入您的分数:");
scanf("%d",&score);
if (score<pass)
{
printf("您的成绩不合格\n");}
else{

printf("您的成绩合格\n");
printf("再见");}
return 0;}
