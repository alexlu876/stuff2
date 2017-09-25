#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int cool[10];
  srand(time(NULL));
  int i;
  for(i = 0; i < 9; i++){
    cool[i] = rand();
    printf("value cool[%d] is %d\n", i, cool[i]);
  }
  cool[9] = 0;
  printf("value cool[%d] is %d\n", i, cool[i]);
  int good[10];
  int *ip1 = cool+9;
  int *ip2 = good;
  int k;
  for(k = 9; k >= 0; k--){
    *ip2 = *ip1;
    *ip2++;
    *ip1--;
    printf("value good[%d] is %d\n", 9 - k, good[9 - k]);
  }
  return 0;
}
