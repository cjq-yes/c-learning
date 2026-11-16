#include<stdio.h> 
int main(){
int n=0;
int i=0;
double sum=0.0;
scanf("%d",&n);
for(i=1;i<=n;i++){
	sum=sum+1.0/i;
}
printf("f(%d)=%f\n",n,sum)	;
return 0;
}

