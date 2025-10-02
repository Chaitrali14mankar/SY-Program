#include <stdio.h>
void quick(int a[],int l,int h){
    if(l<h){
        int p=a[h],i=l-1,t;
        for(int j=l;j<h;j++)
            if(a[j]<p){ i++; t=a[i]; a[i]=a[j]; a[j]=t; }
        t=a[i+1]; a[i+1]=a[h]; a[h]=t;
        quick(a,l,i); quick(a,i+2,h);
    }
}
int main(){
    int a[]={10,7,8,9,1,5},n=6;
    quick(a,0,n-1);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
