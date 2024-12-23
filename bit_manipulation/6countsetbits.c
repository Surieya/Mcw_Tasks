#include<stdio.h>

int main(){

  int num = 10;
  int count = 0;
  while(num > 0){
    if(num & 1){
       count++;
    }
    num = num>>1;
  }
  printf("%d",count);

}