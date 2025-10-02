#include <stdio.h>
int main() {
    int a[]={1,2,2,3,4,4,5},n=7,i,j,k;
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) if(a[i]==a[j]) {
            for(k=j;k<n;k++) a[k]=a[k+1]; n--; j--;
        }
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
}
