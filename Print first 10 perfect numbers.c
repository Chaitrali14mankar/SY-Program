#include <stdio.h>
int main() {
    int count=0,n=2;
    while(count<4) {
        int sum=0;
        for(int i=1;i<n;i++) if(n%i==0) sum+=i;
        if(sum==n){ printf("%d ",n); count++; }
        n++;
    }
}
