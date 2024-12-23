#include <stdio.h>

int main(){
        
     int val = 0b0011110001010111;
     int bit = 4;
     
     
     val = val ^ (1<<bit);
    //  printf("%d",sizeof(val) * 4);
     for(int i = sizeof(val) * 4;i>=0;i--){
         printf("%d",(val>>i)&1);
     
}