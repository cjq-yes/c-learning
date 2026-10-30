#include<stdio.h>
int main(){
int count=0;
int num=0;
int sum=0;
int max_score=0;
int pass_score=60;
int pass_count=0;
printf("请输入成绩(输入-1退出)\n");
while(1){
	if(scanf("%d",&num)!=1){
	while(getchar()!='\n');
	printf("输入错误,请重新输入数字.\n");
	continue;
	}
	if(num==-1){
		break;
	}
	if(count==0){
		max_score=num;
	}else if(max_score<=num){
		max_score=num;
	}
	if(num>=pass_score){
		pass_count++;
	}
	sum=num+sum;
	count++;
}
if(count==0){
	printf("请重新输入\n");
}else{
	double avg=(double)sum/count;
	double ratio=(double)pass_count/count*100;
	printf("%d位同学的平均成绩为%.2f,最高为%d,及格率为%.2f%%\n",count,avg,max_score,ratio);
}
return 0;
}

