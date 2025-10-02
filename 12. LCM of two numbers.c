#include <stdio.h>
int main() {
    int a=12,b=15,max=a>b?a:b;
    for(int i=max; ; i++)
        if(i%a==0 && i%b==0) { printf("%d",i); break; }
}
