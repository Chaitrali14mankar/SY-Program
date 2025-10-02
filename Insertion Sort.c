#include <stdio.h>
int main() {
    int a[5]={5,2,4,6,1},i,j,key;
    for(i=1;i<5;i++){
        key=a[i]; j=i-1;
        for(;j>=0 && a[j]>key;j--) a[j+1]=a[j];
        a[j+1]=key;
    }
    for(i=0;i<5;i++) printf("%d ",a[i]);
}
