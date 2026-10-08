#include<stdio.h>
int main(){
int ot=0;
int m=0;
scanf("%d %d",&ot,&m);
int minute=(ot/100)*60+ot%100+m; 
int time=(minute/60)*100+minute%60;
printf("%d",time);
return 0;}
