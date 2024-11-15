#include <stdio.h>
int main() {
    int x,y,n,k;
    scanf("%d%d%d%d",&x,&y,&n,&k);
    if (k>n) {
        printf("%d",n*x);
    }
    else {
        int bl=n-k;
        printf("%d",k*x+bl*y);
    }
}