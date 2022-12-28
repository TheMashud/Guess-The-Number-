#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;
    //printf("The Random Number is %d",number);  

    do{
        printf("<- Guess the number between 1 to 100 ->\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("<- Lower Number Plz! ->\n");
        }
        if(guess<number)
        {
             printf("<- Higher Number Plz! ->\n");
        }
        else{
            printf("<- You Gussed it in %d attempts ->\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}