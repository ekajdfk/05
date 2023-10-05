#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int answer = 32;
  int num;
  int trial = 0;
  
  do
  {
      printf("input a number: ");
      scanf("%d", &num);
      
      if(num < answer)
          printf("lower\n");
      else if(num > answer)
          printf("higher\n");
          
      trial = trial + 1;
  }
  while(num != answer);
  
  printf("congratulation!\n");
  printf("number of trials: %d\n", trial);
  
  system("PAUSE");	
  return 0;
}
