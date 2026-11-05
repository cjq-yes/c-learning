#include<stdio.h>
int main(){
int n=0;
int is_prime=1;
printf("请输入数字\n");
scanf("%d",&n);
for(int i=2;i<n;i++){
	if(n%i==0) {
		is_prime=0;
	}
}
if(n<=1){
	printf("n不是素数,素数必须大于1\n");
}else if(is_prime=1){
	printf("n是素数\n");
}else{
	printf("n不是素数\n");
}
return 0;
}
