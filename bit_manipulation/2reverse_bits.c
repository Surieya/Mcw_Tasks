// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
     unsigned reversed = 0;
     int num = 13;
     for(int i = 0;i<sizeof(num);i++){
         int lsb = num&1;
         reversed = (reversed<<1) | lsb;
         num = num>>1;
        //  printf("%d ",reversed);
     }
     printf("%d",reversed);
     

    return 0;
}