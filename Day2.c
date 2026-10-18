#include<stdio.h>
int main(){
printf("请输入您的分数:");
int score=0;
scanf("%d",&score);
if (score>=90){
    printf("A\n");}
else if (score>=80) {
    printf("B\n");} 
else if (score>=70) {
    printf("C\n");}	
else {printf("D\n") ;}
return 0;}
