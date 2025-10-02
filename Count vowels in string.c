
#include <stdio.h>
#include <string.h>
int main() {
    char str[]="education"; int c=0;
    for(int i=0;i<strlen(str);i++)
        if(strchr("aeiou",str[i])) c++;
    printf("%d",c);
}
