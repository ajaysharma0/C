#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int original_num=n;
    int rev=0;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==original_num){
        printf("Number is Palindrome");
    }
    else{
        printf("Not");
    }

}
//Palindrome or not
