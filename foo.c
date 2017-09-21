#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int cool[10];
  srand(1234);
  int i;
  for(i = 0; i < 9; i++){
    cool[i] = rand();
    printf("value cool[%d] is %d\n", i, cool[i]);
  }
  cool[9] = 0;
  printf("value cool[%d] is %d\n", i, cool[i]);
  int *ip;
  int good[10];
  int k;
  for(k = 9; k >= 0; k--){
    ip = &cool[k];
    good[9 - k] = *ip;
    printf("value good[%d] is %d\n", 9 - k, good[9 - k]);
  }
  return 0;
}
