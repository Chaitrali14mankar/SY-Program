#include <stdio.h>
int main() {
    int b=1011,n=0,p=1;
    for(;b>0;b/=10){ n+=(b%10)*p; p*=2; }
    printf("%d",n);
}
