#include<stdio.h> 
int main(){
int max_score=0;
int sum=0;
int num=0;
int count=0;
printf("请输入成绩\n");
scanf("%d",&num);
if (num!=0){
	max_score=num;
	sum=num+sum;
	count++;
}
while (scanf("%d",&num)==1&&num!=0){
if (num>max_score){
	max_score=num;
}sum=sum+num;
count++;
}
if (count==0){
	printf(" 输入错误\n");
}else{
double avg=0;
avg=(double)sum/count;
printf("%d位同学的平均成绩为%.2f,最大的为%d\n",count,avg,max_score);
}
return 0;
}
