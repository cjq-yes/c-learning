#include<stdio.h>
int main(){
int x=0;
int ret=0;
printf("ÇëÊäÈëÊı×Ö\n");
scanf("%d",&x);
while(x>0){
	int d=0;
    d=x%10;
	ret=ret*10+d;
	x/=10;
}
printf("%d",ret);
return 0;
}
