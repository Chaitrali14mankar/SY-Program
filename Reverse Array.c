#include <stdio.h>
int main() {
    int a[]={1,2,3,4,5},n=5;
    for(int i=0;i<n/2;i++){ int t=a[i]; a[i]=a[n-1-i]; a[n-1-i]=t; }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
