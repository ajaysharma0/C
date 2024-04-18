//Armstrong number
#include<stdio.h>
#include<math.h>
int count(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    int num;
    scanf("%d",&num);
    int original=num;
    int sum=0;
    int digit=count(num);
    while(num!=0){
        int lastDigit=num%10;
        sum=sum+pow(lastDigit,digit);
        num=num/10;
        
    }
    if(sum==original){
        printf("Yes");
    }else{
        printf("No");
    }
}
