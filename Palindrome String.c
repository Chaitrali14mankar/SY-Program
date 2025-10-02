#include <stdio.h>
#include <string.h>
int main() {
    char s[]="level"; int flag=1;
    for(int i=0;i<strlen(s)/2;i++) if(s[i]!=s[strlen(s)-1-i]) flag=0;
    if(flag) printf("Palindrome"); else printf("Not");
}
