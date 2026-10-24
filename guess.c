//程序名：猜数字
//目的：练习do_while
//时间：10.24
#include<stdio.h> 
int main(){
int answer=42;
int guess=0;
int count=0;
printf("我想了一个1-100的数, 你猜:\n");
scanf("%d",&guess);
count++; 
while (guess!=42) {
	if (guess<42) {
		 printf("太小了\n");
}else if (guess>42) {
	printf("太大了\n");}
	printf("请再猜一次\n");
	scanf("%d",&guess);
	count++;
}printf("恭喜你!猜对了,一共用了%d次.",count);
return 0;}
