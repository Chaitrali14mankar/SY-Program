#include <stdio.h>
#include <string.h>
int main() {
    char s[]="hello world",rev[50]; int n=strlen(s),j=0;
    for(int i=n-1;i>=0;i--) rev[j++]=s[i];
    rev[j]='\0'; printf("%s",rev);
}
