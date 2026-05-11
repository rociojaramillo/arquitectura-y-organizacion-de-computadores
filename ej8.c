#include <stdio.h>


int main(){

   int i = 1;
   
   printf("i antes de ++i: %d\n", i);
   printf("resultado de ++i: %d\n", ++i);
   printf("i despues de ++i: %d\n", i);
   
   
   printf("i antes de i++: %d\n", i);
   printf("resultado de i++: %d\n", i++);
   printf("i despues de i++: %d\n", i);
   

   return 0;

}