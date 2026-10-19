#include<stdio.h>
int main(){
int score=0;
if (score<0||score>100){
	printf("输入错误,成绩必须在0-100之间");}
scanf("%d",&score);
if (score>=90){
    printf("A\n");}
else if (score>=80){
     printf("B\n");}
else if (score>=60){
      printf("C\n");}
else {printf("D\n");}
return 0;}
	  	     
