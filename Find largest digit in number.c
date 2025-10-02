#include <stdio.h>
int main() {
    int n=38279,max=0;
    for(;n>0;n/=10)
        if(n%10>max) max=n%10;
    printf("%d",max);
}
