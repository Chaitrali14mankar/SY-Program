#include <stdio.h>
#include <string.h>
int main() {
    char s[]="programming";
    int f[256]={0};
    for(int i=0;i<strlen(s);i++) f[s[i]]++;
    for(int i=0;i<256;i++) if(f[i]>0) printf("%c = %d\n",i,f[i]);
}
