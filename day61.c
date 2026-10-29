#include<stdio.h> 
int main(){
int count=0;
int pass_count=0;
int num=0;
int sum=0;
int max_score=0;
printf("请输入成绩,输入-1结束\n");
while(1){
	if(scanf("%d",&num)!=1){
	printf("输入错误\n");
	while(getchar()!='\n');
	continue;
}
	if(num==-1) {
		break;
	}
	if(count==0){
		max_score=num;
	}else if(num>max_score){
		max_score=num;
	}
	if(num>=60){
		pass_count++;
	}
	sum=num+sum;
	count++;
}
if(count==0){
	printf("输入的不是有效值\n"); 
}else{
	double avg=(double)sum/count;
	double ratio=(double)pass_count/count*100;
	printf("%d位同学的平均成绩为%.2f,及格率为%.2f%%,最高为%d",count,avg,ratio,max_score);
}
return 0;
}
