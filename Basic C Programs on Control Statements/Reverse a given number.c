#include<stdio.h>
int main(){
   int n;
    scanf("%d",&n);
    int reverse = 0;
    while(n!=0){
        int remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    printf("%d", reverse);
}
