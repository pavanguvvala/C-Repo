#include <stdio.h>
int main() {
    int x,opt=0,cn=0;
    scanf("%d",&x);
    if (x%5==0) {
        while (opt<x) {
            cn++;
            if (opt+10<=x) {
                opt+=10;
                continue;
            }
            if (opt+5<=x) {
                opt+=5;
            }
        
        }
        printf("%d",cn);


    }
    else {
        printf("%d",-1);
    }

}