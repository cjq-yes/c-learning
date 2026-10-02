#include <stdio.h>
int main(){
int a=5;
int b=10;
int temp;
printf("操作前%d,%d",a,b);
temp=a;
a=b;
b=temp;
printf("操作后%d,%d",a,b);
return 0;}
