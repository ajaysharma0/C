//Ascii values of a character
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>="A" && ch<='Z')){
        printf("%d",ch);
    }
    else{
        printf("%c",ch);
    }
}
