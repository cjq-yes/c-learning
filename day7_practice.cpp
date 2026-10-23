#include<stdio.h>
int main() {
int score=0;
printf("请输入您的成绩:\n");
scanf("%d",&score);
if (score>=90){
   printf("A\n");}
else if (score>=80) {
   printf("B\n");}
else if (score>=70){
   printf("C\n");}
else{printf("不合格\n");}
return 0;}

