#include <stdio.h>
int main() {
    int n=2357;
    for(;n>0;n/=10) {
        int d=n%10,flag=0;
        for(int i=2;i<=d/2;i++)
            if(d%i==0) flag=1;
        if(flag==0) printf("%d ",d);
    }
}
