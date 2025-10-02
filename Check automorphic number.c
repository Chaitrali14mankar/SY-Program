#include <stdio.h>
int main() {
    int n=25,sq=n*n;
    int temp=n,flag=1;
    for(;n>0;n/=10,sq/=10)
        if(n%10!=sq%10) { flag=0; break; }
    if(flag) printf("Automorphic");
    else printf("Not Automorphic");
}
