#include <stdio.h>
int main() {
    int n,opt=0,i=5,k=0;
    scanf("%d",&n);
    while (opt<n) {
        if (opt+i<=n) {
            opt+=i;
            k++;
        }
        else {
            i--;
        }
    }
    printf("%d",k);
}