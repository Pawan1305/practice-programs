#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int pass;
   int number,guess,numguess=0;
   srand(time(0));
   number = rand()%100+1;
  // Generating a random number between 1 to 100//
  // printf("\nRandom number = %d\n",number);
  while(pass!=54321)
  {
  printf("Enter password to enter in game = ");
  scanf("%d",&pass);
  }
  if(pass==54321)
  {
  do{
      printf("\nGuess a number between 0 to 100 = ");
      scanf("%d",&guess);
      if(guess>number)
      printf("\nEnter Lower number\n");
      else if(guess<number)
      printf("\nEnter Higher number\n");
      else
      printf("\nCorrect\n");
      numguess++;
       }
      while(guess!=number);
  printf("\nYou guessed in %d attempts\n",numguess);
  }
    return 0;
}