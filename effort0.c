#include<stdio.h>
int main(){
int cnt=0;
int a=0;
scanf("%d",&a);
int i,j,k;
for( i=a ; i<=a+3;i++ ){
	for( j=a;j<=a+3;j++ ){
		for( k=a;k<=a+3;k++ ){
			if(i!=j&&j!=k&&k!=i){
			cnt++;
		printf("%d%d%d",i,j,k);
		if( cnt==6 )	{
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
