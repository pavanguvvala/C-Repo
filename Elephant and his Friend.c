#include <stdio.h>
int main() {
    int n,opt=0,ni;
    scanf("%d",&n);
    for (int i=0;opt<n;i++) {
        if (opt+5<=n) {
            opt+=5;
        }
        else if (opt+4<=n) {
            opt+=4;
        }
        else if (opt+3<=n) {
            opt+=3;
        }
        else if (opt+2<=n) {
            opt+=2;
        }
        else if (opt+1<=n) {
            opt+=1;
        }
        ni=i;
    }
    printf("%d",ni+1);
}