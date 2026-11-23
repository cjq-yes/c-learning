#include<stdio.h>
int main() {
int a;
int b;
int c;
scanf("%d %d",&a,&b);
while( b!=0 ){
	c=a%b;
	a=b;
	b=c;
}
printf("%d",a);
return 0;
}
