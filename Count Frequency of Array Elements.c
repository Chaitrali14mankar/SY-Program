#include <stdio.h>
int main() {
    int a[]={1,2,2,3,1,4},n=6,visited[6]={0};
    for(int i=0;i<n;i++) {
        if(visited[i]) continue;
        int c=1;
        for(int j=i+1;j<n;j++) if(a[i]==a[j]){ c++; visited[j]=1; }
        printf("%d occurs %d times\n",a[i],c);
    }
}
