#include<stdio.h>
int main(){
int rows=5;
int columns=5;
for(int i=1;i<=rows;i++){
	for(int j=1;j<=columns;j++){
		if(i==1||i==rows||j==1||j==5){
			printf("* ");
	}else{
		printf("  ");	
		}
	}
	printf("\n");
}
return 0;
}
