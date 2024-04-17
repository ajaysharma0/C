//A character is an alphabet or not
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'|| ch>='A' && ch<='Z'){
        printf("character");
    }
    else{
        printf("Not");
    }
    
}
