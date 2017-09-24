/*
       _    _____ 
      | |  / ____|
      | | | |     
  _   | | | |     
 | |__| | | |____ 
  \____/   \_____|
                  
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
  srand( time(NULL) );
  int raymond[10];
  int i;
  for(i = 0; i < 9; i ++){
    raymond[i] = rand();
  }
  raymond[9] = 0;

  printf("Orginal:\n");
  for( i = 0; i < 10; i++){
    printf("arr[%d] = %d\n", i, raymond[i]);
  }
  
  int numba_two[10];
  int * pointo;
  
  for( i = 9; i >= 0; i --){
    pointo = &raymond[i];
    numba_two[ 9 - i] = *pointo;
  }
 
  printf("Reverse:\n");
  for( i = 0; i < 10; i++){
    printf("arr[%d] = %d\n", i, numba_two[i]);
   }
  

}
