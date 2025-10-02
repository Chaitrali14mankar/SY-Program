#include <stdio.h>
void heapify(int a[],int n,int i){
    int smallest=i,l=2*i+1,r=2*i+2,t;
    if(l<n && a[l]<a[smallest]) smallest=l;
    if(r<n && a[r]<a[smallest]) smallest=r;
    if(smallest!=i){ t=a[i]; a[i]=a[smallest]; a[smallest]=t; heapify(a,n,smallest); }
}
int main(){
    int a[]={4,10,3,5,1},n=5;
    for(int i=n/2-1;i>=0;i--) heapify(a,n,i);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
