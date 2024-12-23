#include<stdio.h>

int main(){
   int num = 0b0000001000000100;
   int count = 0;
   for(int i = 15;i>=0;i--){

    if((num >> i) & 1 != 0){
        break;
    }
    count++;

   }
   printf("%d",count);
   
    return 0;
}