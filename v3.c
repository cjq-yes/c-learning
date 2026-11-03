#include<stdio.h>
int main(){
int answer=42;
int best=0;
int round=0;
char again='y';
char buf[10];
printf("===欢迎来到钢蛋猜数字v3.0===\n");
printf("范围1-100,最多猜10次,按q退出.\n");
while(again=='y'||again=='Y'){
	int guess=0;
	int used=0;
	int won=0;
	round++;
	while(used<10){
		printf("请输入猜测:\n");
		scanf("%s",buf);
		if(buf[0]=='q'||buf[0]=='Q'){
			printf("程序结束,再见\n");
			return 0;
		}
	if(sscanf(buf,"%d",&guess)!=1){
		printf("非法输入,请重新输入数字\n");
		continue;
	}
	if(guess<1||guess>100){
		printf("超出范围,请重新输入\n");
		continue;
	}
	used++;
	if(guess==answer){
		printf("猜中了,本局用了%d次\n",used);
		won=1;
		break;
	}else if(guess>answer){
		printf("太大了\n");
	}else{
		printf("太小了\n");
	}
}
if(won==0){
	printf("10次机会用完了！答案是%d.\n",answer);
}else{
	if(best==0||best>used){
		best==used;
	}
}
printf("\n再玩一局？ (y/n)");
scanf(" %c",&again);
while(again!='y'&&again!='Y'&&again!='n'&&again!='N'){
	printf("只能输入y或n\n");
	scanf(" %c",&again);
}
}
printf("\n==游戏结束==\n");
if("best==0"){
	printf("总共玩了%d局,最少次数:暂无\n",round) ;
}else{
	printf("共%d局,最少用了%d次\n",round,best);
}
return 0;
}


