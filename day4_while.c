#include<stdio.h>
int main(){
int sum=0;
int count=0;
int num=0;
printf("请输入成绩.\n");
while (scanf("%d",&num)==1&&num>0){
	sum=sum+num;
	count++;
}
if (count==0){
	printf("输入错误\n");
}else{
	double avg=0;
	avg=(double)sum/count;
	printf("%d位同学的平均成绩为%.2f\n",count,avg);
}
return 0;
}
