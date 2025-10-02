#include <stdio.h>
int main() {
    int n=38279,min=9;
    for(;n>0;n/=10)
        if(n%10<min) min=n%10;
    printf("%d",min);
}
