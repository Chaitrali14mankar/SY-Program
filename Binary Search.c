#include <stdio.h>
int main() {
    int a[]={1,2,3,4,5},n=5,key=3,l=0,h=n-1,mid,flag=0;
    for(;l<=h;) {
        mid=(l+h)/2;
        if(a[mid]==key){ flag=1; break; }
        else if(a[mid]<key) l=mid+1;
        else h=mid-1;
    }
    if(flag) printf("Found"); else printf("Not Found");
}
