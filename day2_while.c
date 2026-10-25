#include<stdio.h>
int main() {
int answer=42;
int guess=0;
int count=0;
printf("欢迎来到数字小游戏,在1-100之间猜一个数字,你只有十次机会.\n");
while (guess!=answer&&count<10) {
	printf("请输入您的猜测:\n");
	scanf("%d",&guess);
	count++;
	if (guess>42){
		printf("太大了\n");
	}else if (guess<42){
		printf("太小了\n");
	}
}
if (guess==answer){
      printf("恭喜你,猜对了,用了%d次机会\n",count);
}else{
	printf("对不起,您的十次机会用尽了.正确结果为%d.\n",answer);
}

return 0;
}
 
