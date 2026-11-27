#include<stdio.h>
int main () {
int n=0;
int i=1;
scanf("%d",&n);
int first=1;
while( i<n ){
	first*=10;
	i++;}
	printf("%d",first);
i=first;
while( i<first*10 ){
	int t=i;
	int sum=0;
	do{
		int d=t%10;
		t/=10;
	int j=1;
	int p=d;
	while( j<n ){
		p*=d;
		j++;
	}
	sum+=p;
}while( t>0 );
	if( sum==i ){
		printf("%d",i);
	}
	i++;
}
return 0;
}


