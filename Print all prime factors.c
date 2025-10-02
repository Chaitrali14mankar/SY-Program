#include <stdio.h>
int main() {
    int n=60;
    for(int i=2;i<=n;i++)
        while(n%i==0) { printf("%d ",i); n/=i; }
}
