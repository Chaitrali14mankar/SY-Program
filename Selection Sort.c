#include <stdio.h>
int main() {
    int a[5]={64,25,12,22,11},i,j,min,t;
    for(i=0;i<5-1;i++) {
        min=i;
        for(j=i+1;j<5;j++) if(a[j]<a[min]) min=j;
        t=a[i]; a[i]=a[min]; a[min]=t;
    }
    for(i=0;i<5;i++) printf("%d ",a[i]);
}
