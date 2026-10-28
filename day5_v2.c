#include<stdio.h>
int main (){
int num=0;
int sum=0;
int max_score=0;
int count=0;
printf("请输入成绩(输入0结束)\n");
while(1){
	if(scanf("%d",&num)!=1) {
		printf("输入错误,请重新输入数字\n");
		while(getchar()!='\n');
		continue;
	}
	if(num==0){
		break;
	}
	if (count==0){
		max_score=num;
	}else if(num>max_score){
		max_score=num;
	}
	sum=sum+num;
	count++;
}
if(count==0){
	printf("没有任何有效数据\n");
}else{
	double avg=(double)sum/count;
	printf("%d位同学的平均成绩为%d,最高是%d",count,avg,max_score);
}
return 0;}
