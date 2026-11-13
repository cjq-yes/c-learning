#include<stdio.h>
int main(){
    int x;
printf("ÇëÊäÈë´ÕµÄ½ğ¶î\n");
scanf("%d",&x);
int total=x*10;
for(int count_five=0;count_five<=total/5;count_five++){
    for(int count_tow=0;count_tow<=total/2;count_tow++){
        for(int count_one=0;count_one<=total/1;count_one++){
            if(count_five*5+count_tow*2+count_one*1==total){
                printf("5:%d,2:%d,1:%d\n",count_five,count_tow,count_one);
            }
        }
    }
} 
return 0;   
}

