#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    printf("%d",count);
}
//Number of digits in an integer
