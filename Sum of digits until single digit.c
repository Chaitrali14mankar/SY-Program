#include <stdio.h>
int main() {
    int n=9876,sum;
    do {
        sum=0;
        for(;n>0;n/=10) sum+=n%10;
        n=sum;
    } while(n>9);
    printf("%d",n);
}
