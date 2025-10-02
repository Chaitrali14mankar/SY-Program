#include <stdio.h>
int main() {
    int n=3,a[3][3],val=1,top=0,bottom=n-1,left=0,right=n-1,i;
    while(top<=bottom && left<=right){
        for(i=left;i<=right;i++) a[top][i]=val++;
        top++;
        for(i=top;i<=bottom;i++) a[i][right]=val++;
        right--;
        for(i=right;i>=left;i--) a[bottom][i]=val++;
        bottom--;
        for(i=bottom;i>=top;i--) a[i][left]=val++;
        left++;
    }
    for(i=0;i<n;i++){ for(int j=0;j<n;j++) printf("%d ",a[i][j]); printf("\n"); }
}
