#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    //nguess=Number of Guesses
    
    int number,guess,nguess=0;
    
    srand(time(0));
    
    //To Generate Random Number between 1 to 100//
    
    number = rand()%100;

    //printf("Number = %d",number);
    
    printf("\nGuess any Integer between 1 to 100\n");
    
    do{
    
    scanf("%d",&guess);
    
    if(guess<number)
        {
            printf("\nHigher Number Please\n");
        }
    
        else if(guess>number)
            {
                printf("\nLower Number Please\n");
            }
    
        nguess++;
    
    }
    while(guess!=number);

        printf("\nYou guessed in %d attempts\n",nguess);

    return 0;
}