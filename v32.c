 #include<stdio.h>
int main(){
int round=0;
int answer=42;
int best=0;
char again='y';
char buf[10];
int guest=0;
printf("==欢迎来到钢蛋猜数字游戏v3.0==\n");
printf("在1-100猜一个数字,按q(Q)退出\n") ; 
while(again=='y'||again=='Y'){
	int guess=0;
	int used=0;
	int won=0;
	round++;
	printf("第%d局开始\n",round);
	while(used<10){
		printf("请输入你的猜测\n");
		scanf("%s",buf);
		if(buf[0]=='q'||buf[0]=='Q'){
			printf("程序结束,再见！\n");
			return 0;
		}
		if(sscanf(buf,"%d",&guess)!=1){
			printf("输入错误,请输入数字\n");
			continue;
		}
		if(guess>100||guess<0){
			printf("输入错误,范围是1-100\n");
			continue;
		}
		used++;
		if(guess==42){
			printf("恭喜你,回答正确\n");
			won=1;
			break;
		}else if(guess<42){
			printf("太小了\n");
		}else{
			printf("太大了\n");
		}
		if(won==0) {
		printf("对不起,10次机会用完了,答案是%d\n",answer);	
		}else{
			if(best==0||best>used){
			best=used;	
			}
		}
	}
		printf("再玩一局？\n");
		scanf(" %c",&again);
		while(again!='y'||again!='Y'||again!='n'||again!='N'){
			printf("输入错误,请输入y或n\n");
			scanf(" %c",again);
		}	
}
printf("==游戏结束==\n");
printf("共%d局,最好为%d次\n",round,best);
return 0;
}
