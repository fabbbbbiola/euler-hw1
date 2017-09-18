#include <stdio.h>
#include <stdlib.h>

//problem 1: multiples of 3 and 5

int sum = 0;

int multiples(){
  int i; //counter
  for (i = 0; i < 1000; i++){
    if ( ((i % 3) == 0) || ((i % 5) == 0)){
      sum += i;
    }
  }  
  printf("sum is %d\n", sum);
}

//problem 6: sum square difference

int i = 0;
int sum1 = 0; //sum of square of natural numbers up to 100
int sum2 = 0; //suare of sum of natural numbers up to 100
int dif = 0; //difference

int sumSquare(){
  while (i <= 100){
    sum1 += i * i;
    i++;
  }
  //  printf("sum1 is %d\n", sum1);
  i = 0;
  while (i <= 100){
    sum2 += i;
    i++;
  }
  sum2 *= sum2;
  //  printf("sum2 is %d\n", sum2);

  dif = sum2 - sum1;
  printf("dif is %d\n", dif);

}

int main(){
  multiples();
  sumSquare();
}
