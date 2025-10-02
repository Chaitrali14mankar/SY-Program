#include <stdio.h>
#include <string.h>
int main() {
    char str[]="ABC";
    for(int i=0;i<strlen(str);i++)
        printf("%c = %d\n",str[i],str[i]);
}
