#include <stdio.h>
int main() {
    int n=3,a[3][3]={0},i=0,j=n/2,num;
    for(num=1;num<=n*n;num++){
        a[i][j]=num; i--; j++;
        if(num%n==0){ i+=2; j--; }
        else if(i<0) i=n-1; else if(j==n) j=0;
    }
    for(i=0;i<n;i++){ for(j=0;j<n;j++) printf("%d ",a[i][j]); printf("\n"); }
}
