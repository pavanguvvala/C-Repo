#include <stdio.h>
int main() {
    int a,b,x,y,t1,t2;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    t1=(a/x)*60+(a%x);
    t2=(b/y)*60+(b%y);
    if (t1<t2) {
        printf("Walter");
    }
    else if (t1>t2) {
        printf("Jesse");
    }
    else {
        printf("Both");
    }
}