#include<stdio.h>
int main(){

   unsigned int num = 10;


   unsigned int reversed = 0;

   for(int i = 0;i < sizeof(num) * 8;i++){
    reversed = (reversed << 1) | (num & 1);

    num  = num >> 1;
   }

    if(num == reversed ) {
        printf("Palindrome");
    }else{
        printf("Not a Palindrome");
    }
   
    return 0;

}