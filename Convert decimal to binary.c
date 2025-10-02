#include <stdio.h>
int main() {
    int n=25,b[32],i;
    for(i=0;n>0;i++){ b[i]=n%2; n/=2; }
    for(i=i-1;i>=0;i--) printf("%d",b[i]);
}
