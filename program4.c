#include<stdio.h>
int main() {
int a=0;
printf("<=6µÄÕûÊý\n");
scanf("%d",&a);
int cnt=0;
for( int i=a;i<=a+3; i++ ){
	for( int j=a;j<=a+3;j++ ){
		for( int k=1;k<=a+3;k++ ){
		if( i!=j&&j!=k&&k!=i ){
			cnt++;
			printf("%d%d%d",i,j,k);
			if(cnt==6){
				printf("\n");
				cnt=0;
			}else{
				printf(" ");
			}
		}	
		}
	}
}
return 0;
}
