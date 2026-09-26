#include <stdio.h>
int main(){
	int price=0; 
	printf("请您输入金额(元):");
	scanf("%d",&price) ;
	int change=200-price;
	printf("找您%d元.\n",change) ;
	return 0;
	 
	
}
