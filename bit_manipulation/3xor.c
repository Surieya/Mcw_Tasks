#include <stdio.h>

int main(){

    int a = 1;
    int b = 2;
    
    int ans = (a | b) & ~(a & b);
    printf("%d ",ans);
    return 0;
}