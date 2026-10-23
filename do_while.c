#include<stdio.h>
int main() {
int n=0;
int x=0;
scanf("%d",&x);
do
{
	x/=10;
	n++;
}while(x>0);
printf("%d",n);
return 0;}

