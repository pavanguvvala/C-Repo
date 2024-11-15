#include <stdio.h>
int main() {
    int n,hds=0;
    scanf("%d",&n);
    for (int i=n-1;i>=1;i--) {
        hds+=i;
    }
    printf("%d",hds);
}