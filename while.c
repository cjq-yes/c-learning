#include<stdio.h>
int main(){
int x=0;
int n=0;
scanf("%d",&x);
x/=10;
n++;
while (x>0){ 
     x/=10;
	 n++;}
printf("%d",n);	 
return 0;}	 
