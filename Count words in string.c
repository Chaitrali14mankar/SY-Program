#include <stdio.h>
#include <string.h>
int main() {
    char str[]="this is test"; int count=1;
    for(int i=0;i<strlen(str);i++)
        if(str[i]==' ') count++;
    printf("%d",count);
}
