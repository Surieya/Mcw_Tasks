#include<stdio.h>

int main(){

    int n = 8;

    if(n > 0 && (n & (n - 1)) == 0){
        printf("YES");
    }else{
        printf("N0");
    }
}